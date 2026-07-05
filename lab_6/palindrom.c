#include<stdio.h>
#include<string.h>
void main(){
    int n,i;
     char s[20];
     printf("enter a string:\n");
     gets(s);
    n=strlen(s);
    char *ptr = s;
    int count=0;
    for(i=0;i<n/2;i++){
        if(*(ptr+i) == *(ptr+n-1-i)){
            count++;
        }
    }
    if(count==n/2){
        printf("palindrom str");
    }else{
        printf("not palindrom");
    }
}