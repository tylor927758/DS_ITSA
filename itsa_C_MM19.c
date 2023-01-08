#include<stdio.h>

int main(){
    int a;
    double z;
    while(scanf("%d",&a)!=EOF){
        if(a>=1500) z=a*0.9*0.79;        //分開討論
        else if(a>800) z=a*0.9*0.9;
        else z=a*0.9;
        printf("%.1lf\n",z);
    }

    return 0;
}