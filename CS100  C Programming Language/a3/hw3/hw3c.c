/* George Gerasimos Leventopoulos
AM:4152*/

#include <stdio.h>
int main() {
  int *p[3], a,b,c;
  {
    scanf("%d %d", &a,&b);
    scanf("%d", &c);
    while (c < a || c < b) {
	    scanf("%d", &c);
    }
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    
    if (*p[0] * *p[0] + *p[1] * *p[1] == *p[2] * *p[2]) {
	    printf("Right Triange");
      } else if (*p[0] * *p[0] + *p[1] * *p[1] > *p[2] * *p[2]){
	   printf("Obtuse Triangle");
      }
      else{
	    printf("Acute Triangle");
      }
  }









  }
