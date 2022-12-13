#include <stdio.h>
int main(void){
    int second;
    int s, m, h,d;
    while(scanf("%d", &second)!=EOF){
        s = second % 60;                     //找秒
        second /= 60; 
        m = second % 60;                     //找分
        second /= 60;
        h = second % 24;                     //找小時
        second /= 24; 
        d = second;                          //找天數
        printf("%d days\n%d hours\n%d minutes\n%d seconds\n", d, h, m, s);
    }
    return 0;
}