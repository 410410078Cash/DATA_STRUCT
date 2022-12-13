#include <stdio.h>
int main(void){
    int first, second;
    while(scanf("%d %d",&first,&second)!=EOF){
        if(first>second){                                 //判斷大小，使用等差數列公式
            printf("%d\n", (first + second) * (first - second + 1) / 2);
        }
        else{
            printf("%d\n", (first + second) * (second - first + 1) / 2);
        }
    }
    return 0;
}