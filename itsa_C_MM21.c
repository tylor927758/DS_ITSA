#include<stdio.h>

int main(){
    int a;
    long long b;
    while(scanf("%d",&a)!=EOF){     
        b=1;       
        for(int i=1;i<=a;i++){          //計算階乘
            b*=i;               
        }    
        printf("%lld\n",b);
    }
    return 0;
}