#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("NT10=%d\n",a/10);        //10塊
        printf("NT5=%d\n",a%10/5);       //5塊
        printf("NT1=%d\n",a%10%5);       //1塊
    }
    return 0;
}