

#include <stdio.h> 

int main(){
int k1=0,k2=0,k3=0,a[2][3] , b[3][2],i,j,s=0,c[2][2];

for (i=0 ;i<2;i++) {
    for(j=0;j<3;j++){
        scanf("%d" , &a[i][j]);
    }
    }
    
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
 
for (i=0;i<2;i++){
    for (j=0;j<2;j++){
     k1 = a[i][0] * b[0][j] ;   
     k2 = a[i][1] * b[1][j] ;
     k3 = a[i][2] * b[2][j];
     s = s + k1 + k2 + k3;
     c[i][j]=s;
     s=0;
    }
}


printf("Array A:\n");
printf("%d %d %d\n%d %d %d\n",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2]);

printf("Array B:\n");
printf("%d %d\n%d %d\n%d %d\n",b[0][0],b[0][1],b[1][0],b[1][1],b[2][0],b[2][1]);   
    
printf("Array C:\n");
printf("%d %d\n%d %d\n",c[0][0],c[0][1],c[1][0],c[1][1]);
}