#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    int n,i,j;
    printf("enter a value of n : ");
    scanf("%d",&n);
    char name[n][10];
    printf("enter a number of words :\n");
    for(i=0;i<n;i++){
        scanf("%s",name[i]);
    }
    int random_num = rand()%n;
    printf("%d\n",random_num);
    printf("select randm word = %s\n",name[random_num]);
    char user[10];
    printf("enter user word :\n");
    scanf("%s",user);
    int word1 = strlen(name[random_num]);
    int word2 = strlen(user);
     char temp1[10];
     char temp2[10];
    strcpy(temp1,name[random_num]);
    strcpy(temp2,user);
    if(word1 == word2){
       //sorted random word
      
       for(i=0;i<word1-1;i++){
        for(j=0;j<word1-1-i;j++){
            if(temp1[j]>temp1[j+1]){
                char flag = temp1[j];
                temp1[j] = temp1[j+1];
                temp1[j+1]= flag;
            }
        }
       }     
       puts(temp1);
       //sorted user word
       for(i=0;i<word2-1;i++){
        for(j=0;j<word2-1-i;j++){
            if(temp2[j]>temp2[j+1]){
                char sort = temp2[j];
                temp2[j] = temp2[j+1];
                temp2[j+1] = sort;
            }
        }
       }  
        puts(temp2);
        printf("\n");
        if(strcmp(temp1,temp2)==0){
            printf("Anagram");
        }else{
            printf("This word is not anagram");
        }
    }else{
       printf("user enter word not found");
    }
}