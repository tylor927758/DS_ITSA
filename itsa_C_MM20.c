#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%X\n",a);       //以16進位輸出
    }
    return 0;
}