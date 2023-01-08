#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%.1lf\n",a*1.6);        //英里轉公里公式
    }
    return 0;
}