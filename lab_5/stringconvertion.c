#include<stdio.h>
#include<string.h>
void main(){
    //upper case = Ascii value 65 to 90
    //lower case = 97 to 122
    //difference = 32
    char a[20]={"Hello World!123"};
    printf("enter a string : ");
   
    int i;
    for(i=0;i<20;i++){
        if('A'<=a[i] && a[i]<='Z'){
            a[i]=a[i]+32;
        }else if('a'<=a[i] && a[i]<='z'){
             a[i]=a[i]-32;
        }else{
            a[i];
        }
    }
    puts(a);
}