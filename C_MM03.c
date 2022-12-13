#include <stdio.h>
int main(void){
    int first,second;
    while(scanf("%d %d",&first,&second)!=EOF){           //輸入第一、二個數字
        printf("%d\n",first+second);                     //算第一+第二數字
    }
    return 0;
}