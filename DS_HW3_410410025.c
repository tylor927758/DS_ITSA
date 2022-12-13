#include<stdio.h>
#include<math.h>

int main(){
    int nodenum;
    double len,shortest;

    scanf("%d %lf",&nodenum,&len);                                      //輸入

    int outputhead[nodenum][nodenum],output[nodenum][nodenum];
    double map[nodenum][3];

    for(int i=0;i<nodenum;i++){
        scanf("%*d %lf %lf",&map[i][0],&map[i][1]);                     //存進map
        map[i][2]=0;
        for(int j=0;j<nodenum;j++){
            output[i][j]=-1;
            outputhead[i][j]=-1;
        }
    }

    int head=0,tail=0,choose=0,cnt=0,node=-1,headcnt,tailcnt;;
    double curlen;
  
    for(int i=0;i<nodenum;i++){                                         //從節點0開始
        if(map[i][2]==0){                                               //一次迴圈一架無人機
            map[i][2]=1;
            output[cnt][0]=i;
            curlen=0;
            cnt++;
            tail=i;
            head=i;
            headcnt=0;
            tailcnt=0;
            for(int j=0;j<nodenum;j++){                                 //一次迴圈找一個點
                choose=0;
                shortest=len*len+1;
                node=-1;
                for(int k=0;k<nodenum;k++){                             //找離頭或尾最近的點
                    if(map[k][2]==0 && shortest>((map[head][0]-map[k][0])*(map[head][0]-map[k][0])+(map[head][1]-map[k][1])*(map[head][1]-map[k][1]))){
                        shortest=(map[head][0]-map[k][0])*(map[head][0]-map[k][0])+(map[head][1]-map[k][1])*(map[head][1]-map[k][1]);
                        choose=k;
                        node=0;
                    }
                    if(map[k][2]==0 && shortest>((map[tail][0]-map[k][0])*(map[tail][0]-map[k][0])+(map[tail][1]-map[k][1])*(map[tail][1]-map[k][1]))){
                        shortest=(map[tail][0]-map[k][0])*(map[tail][0]-map[k][0])+(map[tail][1]-map[k][1])*(map[tail][1]-map[k][1]);
                        choose=k;
                        node=1;
                    }
                }
                curlen+=pow(shortest,0.5);                              //判斷距離有無超過
                if(node==0){
                    if(curlen+pow((map[choose][0]-map[tail][0])*(map[choose][0]-map[tail][0])+(map[choose][1]-map[tail][1])*(map[choose][1]-map[tail][1]),0.5)<=len){                
                        head=choose;
                        map[choose][2]=1;                               //沒超過就儲存點並更新頭或尾
                        output[cnt-1][tailcnt+1]=choose;
                        tailcnt++;
                    }
                    else break;                                         //超過就break
                }
                else if(node==1){
                    if(curlen+pow((map[choose][0]-map[head][0])*(map[choose][0]-map[head][0])+(map[choose][1]-map[head][1])*(map[choose][1]-map[head][1]),0.5)<=len){                
                        tail=choose;
                        map[choose][2]=1;
                        outputhead[cnt-1][headcnt]=choose;
                        headcnt++;
                    }
                    else break;
                }
                else break;
            }
        }
    }
    

    printf("%d\n",cnt);
    for(int i=0;i<nodenum;i++){                                             //輸出
        if(output[i][0]!=-1){
            printf("%d ",i);
            for(int j=nodenum-1;j>-1;j--){
                if(outputhead[i][j]!=-1) printf("%d ",outputhead[i][j]);
            }
            for(int j=0;j<nodenum;j++){
                if(output[i][j]!=-1) printf("%d ",output[i][j]);
                else break;
            }
            printf("\n");
        }
        else break;
    }

    return 0;
}