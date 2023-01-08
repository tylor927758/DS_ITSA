#include<stdio.h>

int main(){
    double a;
    while(scanf("%lf",&a)!=EOF){
        printf("%.1lf\n",a*9.0/5.0+32);        //攝氏轉華式公式
    }
    return 0;
}