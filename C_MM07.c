#include <stdio.h>
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){       //輸入數字
        printf("%d %d %d\n", num, num * num, num * num * num); //輸出原始值、平方、立方
    }
    return 0;
}