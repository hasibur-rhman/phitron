#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    int j = n-1;
    int ans = 1;

    while (i<j)
    {
        if(arr[i]!=arr[j]){
            ans = 0;
        }
        i++;
        j--;
    }
    if(ans){
        printf("YES\n");
    }
    else{

    printf("NO\n");
    }
    return 0;
}