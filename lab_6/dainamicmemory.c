#include<stdio.h>
#include<stdlib.h>
void main(){
    int  *pi;
    char *pc;
    float *pf;
    pi = (int *)malloc(sizeof(int));
     pc = (char *)malloc(sizeof(char));
      pf = (float *)malloc(sizeof(float));
      *pi=122;
      *pc='r';
      *pf=3.123;
    if(pi==NULL || pc ==NULL || pf== NULL){
        printf("memory alocation is faield");
    }
    printf("%d ",*pi);
     printf("%c ",*pc);
      printf("%f ",*pf);

}