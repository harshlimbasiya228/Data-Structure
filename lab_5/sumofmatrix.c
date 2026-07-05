#include<stdio.h>
void main(){
    int a[2][2],b[2][2];
    int c[2][2];
    int sum,i,j;
    printf("matrix---A\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix---B\n");
    for(i=0;i<2;i++){
      for(j=0;j<2;j++){
          scanf("%d",&b[i][j]);
      }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("---result of matrix---\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}