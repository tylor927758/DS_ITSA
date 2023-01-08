#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%d days\n",a/86400);        //天數
        printf("%d hours\n",a%86400/3600);       //小時
        printf("%d minutes\n",a%86400%3600/60);       //分鐘
        printf("%d seconds\n",a%86400%3600%60);       //秒數
    }
    return 0;
}