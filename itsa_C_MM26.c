#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){               //迴圈輸出i*i
            printf("%d*%d=%d\n",i,i,i*i);
        }
    }
    return 0;
}