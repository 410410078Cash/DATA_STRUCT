#include <stdio.h>
int main(void){
    int h1, h2, m1, m2,tot_m,money=0;
    while(scanf("%d %d", &h1, &m1)!=EOF){        //停車時間
        scanf("%d %d", &h2, &m2);                //出來時間
        tot_m = (h2 - h1) * 60 + (m2 - m1);      //轉成分鐘數
        if(tot_m>=270){                          //半小時60塊的部分
            money += (tot_m - 240) / 30 * 60;
            tot_m = 240;
        }
        if(tot_m>=150){                          ////半小時40塊的部分
            money += (tot_m - 120) / 30 * 40;   
            tot_m = 120;
        }
        if(tot_m>=30){                           //半小時30塊的部分
            money += tot_m / 30 * 30;             
        }
        printf("%d\n", money);
    }
    return 0;
}