#include<stdio.h>

void main(){
    int n;
    char temp;
   printf("enter a value of n:");
   scanf("%d",&n);
    char s1[n];
    int i,j;
    for(int i=0;i<n;i++){
        scanf(" %c",&s1[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if((int)s1[j]>(int)s1[j+1]){
                temp = s1[j];
                s1[j] = s1[j+1];
                s1[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%c ",s1[i]);
    }
}