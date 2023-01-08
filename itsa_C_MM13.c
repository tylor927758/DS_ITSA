#include<stdio.h>

int main(){
    int a,b,c,d,z;
    while(scanf("%d %d",&a,&b)!=EOF){
        z=0;
        scanf("%d %d",&c,&d);     
        a=a*60+b;
        c=c*60+d-a;                             //總共停車時間

        if(c>240) z+=(c-240)/30*60+280;         //分開討論
        else if(c>120) z+=(c-120)/30*40+120;
        else z=c/30*30;
        printf("%d\n",z);
    }

    return 0;
}