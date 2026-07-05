#include<stdio.h>
// void delete_dubli(int[],int,int,int);
void main(){
  int n,i,j,k;
//   int count=0;
    printf("enter a value of n:");
    scanf("%d",&n);
    int a[n];
    printf("enter a element :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int dublicate;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                dublicate=j;
                for(k=dublicate;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    // for(i=0;i<n;i++){
    //     for(j=i+1;j<n;j++){
    //         if(a[i]==a[j]){
    //             dublicate=j;
    //             count++;
    //         }
    //     }
    // }  
    // printf("index :%d\n",dublicate);
    // delete_dubli(a,n,dublicate,count);
}
// void delete_dubli(int a[],int n,int dublicate,int count){
//     int i;
//     for(i=dublicate;i<n-1;i++){
//         a[i]=a[i+1];
//     }
//     printf("After remove Dublicates...\n");
//     for(i=0;i<n-count;i++){
//         printf("%d ",a[i]);
//     }
// }