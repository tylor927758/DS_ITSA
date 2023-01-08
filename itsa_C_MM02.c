#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%.1f\n",b*a/2.0);           //三角形面積公式
    }
    return 0;
}