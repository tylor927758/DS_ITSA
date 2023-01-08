#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a*a+b*b>10000) printf("outside\n");      //判斷跟圓心的距離
        else printf("inside\n");
    }
    return 0;
}