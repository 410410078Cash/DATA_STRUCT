#include <stdio.h>
int main(void){
    int first, second,asw;
    while(scanf("%d %d",&first,&second)!=EOF){
        for (int i = 1; i <= first && i <= second;i++){      //找小於等於它們兩個數字的數字
            if(first%i==0 && second%i==0){                   //如果都可以整除，設為最大公因數
                asw = i;
            }
        }
        printf("%d\n", asw);
    }
    
}