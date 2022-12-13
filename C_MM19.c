#include <stdio.h>
int main(void){
    int min;
    double money;
    while(scanf("%d", &min)!=EOF){
        money = 0;
        if(min>=1500){                          //分鐘數大於等於1500，以79折算。
            money = (double)min * 0.9 * 0.79;
        }
        else if(min>800){                       //分鐘數大於800，以9折算。
            money = (double)min * 0.9 * 0.9;
        }
        else{                                   //否則以正常記價計算。
            money = (double)min * 0.9;
        }
        printf("%.1f\n", money);
    }
    return 0;
}