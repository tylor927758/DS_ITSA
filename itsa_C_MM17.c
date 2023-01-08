#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        for(int i=a;i>0;i--){
            if(a%i==0 && b%i==0){
                printf("%d\n",i);      //從a往下一個一個找最大公因數
                break;
            }
        }
    }
    return 0;
}