#include<stdio.h>

int main(){
      int n;
    scanf("%d",&n);
    int space = 0;
    int star = n*2-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }

    return 0;
}