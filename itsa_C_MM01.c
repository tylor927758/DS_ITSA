#include<stdio.h>

int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){                    
        printf("Trapezoid area:%.1f\n",(b+a)*c/2.0);        //梯形面積公式
    }
    return 0;
}