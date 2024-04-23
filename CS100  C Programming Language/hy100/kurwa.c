/*George Gerasimos Leventopoulos  AM : 4152 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc , char *argv[]) {
    /*dilosi metabliton*/

    int i,x, flag, flag3 ,fault, letterscounter;
    char character, *kanonikotext;
    char *textmekena;
    FILE *fp;
    i = 0;

    fault = 0;
    /*dilosi fakelou*/
    /*anoigma fakelou*/
    fp = fopen(argv[1], "r");
    /*elegxos an o fakelos iparxei*/
    if (fp == NULL) {
        exit(-1);
    }

    kanonikotext = malloc( sizeof(char));
    /*diabasma fakelou*/
    i = 0;
    while ((kanonikotext[i] = getc(fp)) != EOF) {
        i++;
        kanonikotext = realloc(kanonikotext, i * sizeof(char));
    }
    textmekena = malloc( sizeof(char));
    letterscounter = i;
    /*elegxos gia ton deytero pinaka*/
    for (i = 0; i < letterscounter; i++) {
        if (kanonikotext[i] == ' ') {
            textmekena[i] = ' ';
        } else if (kanonikotext[i] == '\n') {
            textmekena[i] = '\n';
        } else {
            textmekena[i] = '_';
        }
    }
    /*emfanisi text me kena*/
	for(i=0;i<letterscounter;i++){
       		printf("%c", textmekena[i]);
	}
    printf("\n___\n");
    while (fault < 4) {

        scanf("%c", &character);

        if(character == '\n'){
            continue;
        }

        flag=0;
        /*tsekaro an iparxei to gramma tou xrhsth*/
        for (i = 0; i < letterscounter; i++) {
            if (kanonikotext[i] == character) {
                textmekena[i] = character;
                flag =1;
            }
        }
        printf(">");
        for (i = 0; i < letterscounter; i++) {
            printf("%c", textmekena[i]);
        }
        printf("\n");


        if(flag == 0){
            fault++;
        }

        if (fault == 0) {
            printf("___\n");
        } else if (fault == 1) {
            printf("_|_\n");
        } else if (fault == 2) {
            printf(" |\n |\n_|_\n");
        }else if (fault == 3){
            printf("  ___\n |\n |\n |\n_|_\n");
        }else if (fault == 4) {
            printf("  ___\n");
            printf(" |   o\n |  -|-\n |   |\\\n_|_\n");
        }
        flag3 = 1;
        for(x=0;x<letterscounter;x++){
             if(textmekena[x]!=kanonikotext[x]){
                 flag3=0;
                 break;
             }
        }
        if(flag3 == 1){
            break;
        }
    }

    if (fault == 4) {
        printf("LOSE\n");
    } else {
        printf("WIN\n");
    }
fclose(fp);
return 0;
}

