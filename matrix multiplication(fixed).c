#include<stdio.h>
int main () {
    int a [3][3];
    int b [3][3];
    int c [3][3];
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
 }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
 }
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
    sum+=a[i][k]*b[k][j];            
            }
            c[i][j]=sum;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    return 0;
}

