#include<stdio.h>

int main(){
    int a,b;
    double z;
    while(scanf("%d %d",&a,&b)!=EOF){
        z=0;                               

        if(a>120) z=(a-120)*b*1.66+60*b*1.33+60*b;        //分開討論
        else if(a>60)  z=b*(a-60)*1.33+60*b;
        else z=b*a;
        printf("%.1lf\n",z);
    }

    return 0;
}