#include<stdio.h>

int main(){
   unsigned int n;
    scanf("%u",&n);
    int star = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            printf("*");
        }
        star--;
        printf("\n");
    }
    return 0;
}