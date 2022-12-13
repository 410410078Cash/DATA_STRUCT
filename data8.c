#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num,flag;
    while(scanf("%d",&num)!=EOF){
        flag = 0;
        if(num==1){                 //1不是質數
            flag = 1;
            printf("NO\n");
        }
        else if(num%2==0){          //偶數不是質數
            flag = 1;
            printf("NO\n");
        }
        else{                       //找所有質數看是否=輸入值
            for (int i = 3; i < num;i=i+2){
                if(num%i==0){
                    flag = 1;
                    printf("NO\n");
                    break;
                }
            }
        }
        if(flag==0){                //沒有被判定為偶數 即為奇數
            printf("YES\n");
        }
    }
    return 0;
}