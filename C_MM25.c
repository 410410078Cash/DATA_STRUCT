#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num, total = 0;
    while(scanf("%d", &num)!=EOF){     //重複輸入
        total = 0;
        if(num>=3){                    //如果小於3答案為0
        for (int i = 3; i <= num;i+=3){//否則持續加3的倍數直到比num小於等於
            total += i;
        }
        printf("%d\n", total);
    }
    else{
        printf("0\n");
    }
    }
    return 0;
}