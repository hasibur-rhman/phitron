#include<stdio.h>

int main(){
    char s[1000001];

    scanf("%s",s);
    int sum = 0;
    for(int i=0;s[i]!='\0';i++){
        // printf("%d \n",s[i]);
        sum+=(s[i]-'0');
    }
    printf("%d",sum);

    return 0;
}