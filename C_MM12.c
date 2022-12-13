#include <stdio.h>
int main(void){
    int meter;
    double closer = 1 - 30 * 2.54 / 100,asw;    //closer是每秒減少的距離
    while(scanf("%d",&meter)!=EOF){
        asw = (double)meter / closer;         
        if((asw-(double)((int)asw))>0){         //無條件進位
            printf("%d\n", (int)asw + 1);
        }
        else{
            printf("%d\n", (int)asw);
        }
    }

    return 0;
}