#include<stdio.h>
void main(){
    int year=0,month=0,day;
    printf("enter a number of days : ");
    scanf("%d",&day);
    if(day>=365){
        year = day / 365;
        day = day%365;
    }
    if(day>=30){
        month = day / 30;
        day = day%30;
    }
    
    printf("year=%d month=%d day=%d",year,month,day);
}