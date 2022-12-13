#include <stdio.h>
int main(void){
    int num,now;
    while(scanf("%d",&num)!=EOF){
        now = 35;
        while(now<=num){                //直到找到比輸入小的35倍數。
            if(now+35>num){
                printf("%d\n", now);    //輸出35的倍數數字。
            }
            else{
                printf("%d ", now);
            }
            now += 35;                  
        }
    }
    return 0;
}