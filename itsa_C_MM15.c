#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(100<a || a<0 || 100<b || b<0) printf("outside\n");   //判斷正方形邊界外
        else printf("inside\n");
    }
    return 0;
}