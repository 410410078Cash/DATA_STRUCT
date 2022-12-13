#include <stdio.h>
int main(void){
    double temp,asw;
    while(scanf("%lf",&temp)!=EOF){   //輸入攝氏
        asw = temp * 9 / 5 + 32;      //公式
        if((int)(asw*10)%10>=5){      //四捨五入
            asw += 0.05;
        }
        printf("%.1f\n", asw);
    }
    return 0;
}