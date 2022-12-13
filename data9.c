#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num,big,sum;
    while(scanf("%d",&num)!=EOF){
        big = 0;
        sum = 0;
        for (int i = num; i >= 2;i--){   //找到最大的 3的倍數的 數字
            if(i%3==0){
                big = i;
                break;
            }
        }
        if(big!=0){                          //如果不是0
            for (int i = 3; i <= big;i=i+3){ //作累加
                sum += i;
            }
            printf("%d\n", sum);
        }
        else{
            printf("0\n");
        }
        
    }
    return 0;
}