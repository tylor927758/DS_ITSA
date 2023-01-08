#include<stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a>b) printf("%d\n",(a+b)*(a-b+1)/2);
        else printf("%d\n",(a+b)*(b-a+1)/2);       //等差級數和
    }
    return 0;
}
