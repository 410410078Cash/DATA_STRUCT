#include <stdio.h>
int func(int num){                   //重複遞迴*2
    if(num==0) return 1;
    return func(num - 1) * 2;
}
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){
        if(num>31){                 //如果num>31，不計算直接輸出
            printf("Value of more than 31\n");
        }
        else{                       //需計算
            num=func(num);
            printf("%d\n", num);
        }
    }
    return 0;
}