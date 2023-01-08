#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%d\n",(int)(a/0.238)+1);        //距離除以速度
    }
    return 0;
}