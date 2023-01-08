#include<stdio.h>

int prime(int x){               //質數判定函式
    if(x==1) return 0;
    if(x==4) return 0;
    for(int i=2;i<x/2;i++){     //從2跑到x/2
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){   
        if(prime(a)==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}