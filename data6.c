#include <stdio.h>
#include <stdlib.h>
int main(void){
    int mon;
    while(scanf("%d", &mon)!=EOF){  //以月分進行輸出
        if(mon>=3&&5>=mon){          
            printf("Spring\n");
        }
        else if(mon>=6&&8>=mon){
            printf("Summer\n");
        }
        else if(mon>=9&&11>=mon){
            printf("Autumn\n");
        }
        else{
            printf("Winter\n");
        }
    }
    return 0;
}