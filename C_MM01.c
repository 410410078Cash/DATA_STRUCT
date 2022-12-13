#include <stdio.h>
int main(void){
    float upper, lower,height;
    while(scanf("%f %f %f",&upper,&lower,&height)!=EOF){                //輸入上底、下底、高
        printf("Trapezoid area:%.1f\n", (upper + lower) * height/2);    //公式:(上底+下底)/2*高
    }
    return 0;
}