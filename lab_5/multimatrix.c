#include<stdio.h>
void main(){
    int a[3][2],b[2][3];
    int c[3][3];
    int i,j,k,sum;
    printf("--matrix-A--\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("--matrix-B--\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<2;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
        
    }
    printf("--Multiplication of Matrix--\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}