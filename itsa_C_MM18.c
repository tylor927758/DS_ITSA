#include<stdio.h>

int main(){
    int a,b[8];
    while(scanf("%d",&a)!=EOF){
        if(a<0) a=256+a;                //判斷正負
        for(int i=0;i<8;i++){           //轉二進位
            b[i]=a%2;               
            a/=2;
        }
        for(int i=7;i>=0;i--){          //倒著輸出
            printf("%d",b[i]);
        }
        printf("\n");
    }
    return 0;
}