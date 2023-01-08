#include<stdio.h>

int main(){
    int a,b=1;
    while(scanf("%d",&a)!=EOF){
        b=1;
        for(int i=0;i<a;i++){               //計算2的a次方
            b*=2;
        }
        if(a<=31) printf("%d\n",b);        //判斷
        else printf("Value of more than 31\n");
    }
    return 0;
}