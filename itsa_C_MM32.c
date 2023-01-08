#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){

        if(a>999 || a<100) printf("No\n");              
        else if((a/100)*(a/100)*(a/100)+(a%100/10)*(a%100/10)*(a%100/10)+(a%10)*(a%10)*(a%10)==a) printf("Yes\n");       //判斷是否符合條件
    
        else printf("No\n");
    }
    return 0;
}