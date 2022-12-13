#include <stdio.h>
int main(void){
    float lower,height;
    while(scanf("%f %f",&lower,&height)!=EOF){             //輸入底、高
        printf("%.1f\n", lower * height/2);                //公式:底*高/2
    }
    return 0;
}