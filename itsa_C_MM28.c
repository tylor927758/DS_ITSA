#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        if(a>34) printf("35");
        for(int i=70;i<=a;i+=35){               //迴圈輸出i*i
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}