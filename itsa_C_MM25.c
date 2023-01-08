#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%d\n",(3+a/3*3)*(a/3)/2);       //等差級數和
    }
    return 0;
}
