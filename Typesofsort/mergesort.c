#include<stdio.h>
int a[100];
int b[100];

//function to merge to sorted array
void merage(int low,int mid,int high){
    int i,j,k,h;
    h=low;
    i=low;
    j=mid+1;

    //comper element of left and right part
    while (h<=mid && j<=high)
    {
        if(a[h]<=a[j]){

            b[i]=a[h];
            h++;

        }else{

            b[i]=a[j];
            j++;

        }
        i++;
    }

    //if right part is finished => copy remaing left part
    if(h>mid){
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }else{
        for(k=h;k<=mid;k++){
            b[i]=a[k];
            i++;
        }
    }
    //copy merged element back into orignal array
    for(k=low;k<=high;k++){
        a[k]=b[k];
    }
}

//function to divide the array
void mergesort(int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        //sort the left part
        mergesort(low,mid);
        //sort the right part
        mergesort(mid+1,high);
        merage(low,mid,high);
    }
}
void main(){
     int i,n;
    printf("enter a value of n:\n");
    scanf("%d",&n);

    printf("enter a element of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(0,n-1);
    printf("Merge sort Apply...\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}