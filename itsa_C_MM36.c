#include<stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        if(a>2 && a<6) printf("Spring\n");        //分開討論
        else if(a>5 && a<9) printf("Summer\n");
        else if(a>8 && a<12)  printf("Autumn\n"); 
        else printf("Winter\n");
    }

    return 0;
}