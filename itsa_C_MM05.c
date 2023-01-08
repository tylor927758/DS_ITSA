#include<stdio.h>

int main(){
    double a;
    while(scanf("%lf",&a)!=EOF){
        printf("%.1lf\n",a*a+0.04);        //正方形面積
    }
    return 0;
}