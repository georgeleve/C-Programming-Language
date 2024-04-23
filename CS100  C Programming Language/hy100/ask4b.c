/* George Gerasimos Leventopoulos     AM 4152 */

#include <stdio.h>
#include <stdlib.h>

/*dilosi katholikon metabliton*/
 char stoixeio2[200];
 int grammi2[200] ;
 int l = -1;

/* sinartisi othisis*/
balestoixeio(char stoixeio , int  grammi){
    l++ ;
 stoixeio2[l] = stoixeio ;
 grammi2[l] = grammi ;
}

/* elegxos parentheseon */ 
elegxos(char open , char close ){
if( open== '(' && close == ')') {return 1;}
else if( open =='{' && close == '}'){return 1;}
else if (open == '[' && close == ']') {return 1;}
else if( open == '<' && close == '>') {return 1;}
else {return 0;}
}

/*arxi tis main*/
int main (int argc , char *argv[]){
/* dilosi topikon metabliton ths main */
int flag = 0,i = 0 , lines = 1 , k , grammi[200] ,x=0;
char st , stoixeio[200], p[8]={'(','[','{','<',')',']','}','>'};
FILE *fp ;

/*anoigma fakelou*/
fp = fopen (argv[1],"r");
if (fp==NULL) {
    exit(-1);
}
while (k != EOF) {
    k = fgetc(fp);
    if (k == '\n') { lines++; }
    if (k == p[0] || k == p[1] || k == p[2] || k == p[3]|| k == p[4]|| k == p[5]|| k == p[6]|| k == p[7]) {
        stoixeio[i] = k;
        grammi[i] = lines;
     }
    i++;
}
fclose(fp);
    for(x=0;x<200;x++){
        if ( stoixeio[x]=='(' || stoixeio[x]=='[' || stoixeio[x]=='{' || stoixeio[x]=='<') {
            balestoixeio(stoixeio[x],grammi[x]) ;
        }
        else if (stoixeio[x] ==')' || stoixeio[x] == ']' || stoixeio[x] == '}' || stoixeio[x]== '>') {
	    if (l==-1){

              flag=1;
                printf("Mismatch: Closing %c in line %d has not opened.\n" , stoixeio[x],grammi[x]);
	    }
            else if (elegxos(stoixeio2[l] ,stoixeio[x]) == 0) {
                printf("Mismatch: Open %c in line %d closes with %c in line %d.\n" ,stoixeio2[l],grammi2[l],stoixeio[x],grammi[x]);
		l--;
               flag = 1 ;
            }else{
                l-- ;
            }
        }
     }
 for(i=0;i<=l;i++){
 flag=1;
 	printf("Mismatch: Open %c in line %d has not closed.\n" ,stoixeio2[i] ,grammi2[i]);
}
    if ( flag == 0 ){
        printf("OK\n");
    }
}


