#include<stdio.h>


int main(){
    int a,b=0;
    while(scanf("%d",&a)!=EOF){
        printf("1");
        for(int i=2;i<=a;i++){
            if(a%i==0) printf(" %d",i);      //判斷因數
        }
        printf("\n");
    }  
    return 0;
}