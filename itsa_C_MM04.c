#include<stdio.h>

int main(){
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF){

        printf("%d+%d=%d\n",a,b,b+a);           //和
        printf("%d*%d=%d\n",a,b,b*a);           //積
        printf("%d-%d=%d\n",a,b,a-b);           //差
        c=a/b;
        if(a%b<0){                              //餘數要大於0
            if(a/b<0) c=a/b-1;
            else c=a/b+1;
        }
        printf("%d/%d=%d...%d\n",a,b,c,a-b*c);      //商跟餘數
    }
    return 0;
}