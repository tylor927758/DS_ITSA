#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%d %d %d\n",a,a*a,a*a*a);   //平方跟立方
    }
    return 0;
}