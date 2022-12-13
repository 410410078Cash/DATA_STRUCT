#include <stdio.h>
#include <stdlib.h>
int func(int num){
    if(num==1 ||num==0){                              //基礎遞迴數值，避免無法暫停                           
        return num + 1;
    }
    else{
        return func(num - 1) + func(num / 2);         //遞迴公式
    }
}
int main(void){
    int num;
    while(scanf("%d", &num)!=EOF){
        printf("%d\n",func(num));
    }
    return 0;
}