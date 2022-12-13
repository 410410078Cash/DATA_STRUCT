#include <stdio.h>
int main(void){
    int first, second;
    while(scanf("%d %d",&first,&second)!=EOF){ //輸入兩個值
        printf("%d\n", (first + second) * (first + second)); //作兩個值和的平方
    }
    return 0;
}