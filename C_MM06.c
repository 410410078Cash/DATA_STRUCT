#include <stdio.h>
int main(void){
    double length,ans;
    while(scanf("%lf",&length)!=EOF){  //輸入英里
        ans = length * 1.6;            //轉換
        if((int)(ans*100)%10>=5){      //四捨五入
            ans += 0.05;
        }
        printf("%.1f\n", ans);
    }
    return 0;
}