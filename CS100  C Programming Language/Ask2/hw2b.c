#include <stdio.h>

int main () {
int i=1 ,n ,a=1,b, j;
scanf ("%d",& n);

for (i=1; i<(n/2) ;i++ ){
printf ("*");
 
  for(a=i; a<(n/2); a++) {
  printf (" "); 
}
printf ("*");
printf("\n");
}

printf("**");
printf("\n");
for (j=(n/2)+1;j<=n;j++) {
    
    printf("*");
  for (b=j;b>(n/2);b--) 
      {
    printf(" ");
  }

printf ("*") ;
printf("\n");
}
}
