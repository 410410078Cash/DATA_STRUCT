#include <stdio.h>
#include <stdlib.h>
int main(void){
  int val;
  int bi[8];
  int index;
  while(scanf("%d", &val)!=EOF){
        for (int i = 0; i < 8;i++){
            bi[i] = 0;
        }
        index = 7;
        if(val<0){                 //輸入為負數
            val = val + 128;
            bi[0] = 1;             //signed bit=1
        }
        while(val>0){              //持續%2/2，作binary轉換
            if(val%2==0){
            bi[index--] = 0;
            }
            else{
                bi[index--] = 1;
            }
            val = val / 2;
        }
        for (int i = 0; i < 8;i++){
            printf("%d",bi[i]);
        }
        printf("\n");
    }
    return 0;
}