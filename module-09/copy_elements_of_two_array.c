#include<stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    int arr3[n1+n2];
    // int j = 0;
    // for(int i=0;i<(n1+n2);i++){
    //     arr3[i] = arr1[i];
    //     if(i>=n1){
    //         arr3[i] = arr2[j++];
    //     }
       
    // }

     for(int i=0;i<(n1+n2);i++){
        arr3[i] = arr1[i];
    }
    int i = n1;
    for(int j = 0;j<n2;j++){
        arr3[i] = arr2[j]; 
        i++;

    }
    for(int i=0;i<(n1+n2);i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}