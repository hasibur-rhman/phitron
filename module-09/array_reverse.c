#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int arr_size =n;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // for(int i =0;i<n/2;i++){
       
    //        if(i<n-1-i){
    //          int temp;
    //         temp = arr[i];
    //         arr[i] = arr[arr_size-1-i];
    //         arr[arr_size-1-i] = temp;
           
    //        }
        
    // }


    int i =0;
    int j = n-1;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}