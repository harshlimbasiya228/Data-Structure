#include<stdio.h>
void main(){
    int n=4;
    int a[][2]={
        {6,8},{1,9},{2,4},{4,7}
    };
    int result[10][2];
    
    int i,j,k=0;
   
    int temp1,temp2;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j][0]>a[j+1][0]){
                temp1=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=temp1;

                 temp2 = a[j][1];
                a[j][1] = a[j + 1][1];
                a[j + 1][1] = temp2;
            }
        }
    }
     for(i = 0; i < n; i++)
    {
        printf("{%d %d},\n", a[i][0], a[i][1]);
    }

    //{{1,9},{2,4},{4,7},{6,8}}
    for(i=0;i<n-1;i++){
        if(a[i][1]>=a[i+1][0]){
            a[i+1][0]=a[i][0];
         if(a[i][1]>=a[i+1][1]){
            a[i+1][1]=a[i][1];
        }else{
            result[k][0]=a[i][0];
             result[k][1]=a[i][1];
              k++;
            }
    }
}
    result[k][0] = a[n-1][0];
    result[k][1] = a[n-1][1];
    k++;

    for(i=0;i<k;i++){
       printf("{%d , %d}\n",result[i][0],result[i][1]);
    }
}
