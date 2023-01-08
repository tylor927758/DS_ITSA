#include<stdio.h>

int perfect(int x){   //完美數判定函式      
    int z=0;           
    for(int i=1;i<x;i++){
        if(x%i==0) z+=i;
    }

    if(x==z) return 1;
    return 0;
}

int main(){
    int a,b=0;
    while(scanf("%d",&a)!=EOF){
        for(int i=2;i<a;i++){         //從小的往上跑
            if(perfect(i)==1){
                if(b==0) printf("%d",i);
                else printf(" %d",i);
                b++;    
            } 
        }
        printf("\n");
    }
    return 0;
}