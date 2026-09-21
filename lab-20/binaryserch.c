#include<stdio.h>
int main(){
    int n=11,i;
    int arr[n];
    printf("enter a array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter a key value of check :\n");
    scanf("%d",&key);
    int start=0;
    int end=n-1;
    int middle,found=0;
    while(start<=end){
        middle=(start+end)/2;
        if(arr[middle]==key){
            printf("key is found index of: %d\n",middle);
            found=1;
            break;       
        }
        else if(arr[middle]>key){         
                    end=middle-1;   
        }else {           
                    start=middle+1;       
        }
    }
    if(found==0){
        printf("key is not found\n");
    }
}