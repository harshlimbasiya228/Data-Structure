#include<stdio.h>

void main(){
    int year;
    printf("enter year:\n");
    scanf("%d &year");

    if((year % 4==0 && year% 100!=0) || (year % 400 == 0)){
        printf("this year is leap year\n");
    }
    else{
        printf("this is not leap year\n");
    }
    // int n;
    // printf("enter a value of n:");
    // scanf("%d",&n);
    // if(n%2==0){
    //     printf("even num");
    // }else{
    //     printf("odd num");
    // }
}