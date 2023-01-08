#include<stdio.h>

int prime(int x){                    //質數判定函式
    for(int i=2;i<x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=a-1;a>0;i--){         //從大的往下找
            if(prime(i)==1){
                printf("%d\n",i);
                break;    
            } 
        }
    }
    return 0;
}