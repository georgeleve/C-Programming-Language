/* George Gerasimos Leventopoulos   AM:4152 */

#include <stdio.h>
#include <string.h>

char max[100],min[100], word[100];
int main(){
    scanf ("%s",word);
    strcpy(min, word);
    strcpy(max,word);
while (strcmp(word,"end")!=0){ 
 if (strcmp(word,min)<0) {
     strcpy(min, word); 
 }
     if (strcmp(word,max)>0) {
     strcpy(max,word); 
     }
   scanf("%s",word);
}

printf("MAX: %s\n", max);
printf("MIN: %s\n", min);

}
