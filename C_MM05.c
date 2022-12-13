#include <stdio.h>
int main(void){
    double edge,asw;
    while(scanf("%lf", &edge)!=EOF){   //輸入邊長
        asw = edge * edge;             //公式:面積=邊長*邊長
        if((int)(asw*100)%10>=5){      //作四捨五入
            asw += 0.05;
        }
        printf("%.1f\n", asw);
    }
    return 0;
}

