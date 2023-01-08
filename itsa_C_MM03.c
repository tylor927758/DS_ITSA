#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",b+a);             //兩數和
    }
    return 0;
}