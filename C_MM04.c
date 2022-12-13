#include <stdio.h>
int main(void){
    int first,second;
    scanf("%d %d", &first, &second);
    printf("%d+%d=%d\n", first, second, first + second);           //輸出相加
    printf("%d*%d=%d\n", first, second, first * second);           //輸出相乘
    printf("%d-%d=%d\n", first, second, first - second);           //輸出相減
    if(first%second<0){                                            //如果被除數是負的
        printf("%d/%d=%d...%d\n", first, second, first / second - 1, first % second + second); // 將餘數轉正，商-1
    }
    else{
        printf("%d/%d=%d...%d\n", first, second, first / second,first%second);  //被除數是正的，就正常處裡
    }
    return 0;
}