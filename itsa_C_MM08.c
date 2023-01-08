#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",(a+b)*(a+b));         //兩數和的平方
    }
    return 0;
}