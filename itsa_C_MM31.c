#include<stdio.h>

int main(){
    int a,z;
    while(scanf("%d",&a)!=EOF){
        z=0;
        for(int i=1;i<=a;i++){               
            if(i%2==0 && i%3==0 && i%12!=0) z+=i;       //判斷是否符合條件
        }
        printf("%d\n",z);
    }
    return 0;
}