#include <stdio.h>
int main(void){
    int money,ten=0,fif=0,one=0;
    scanf("%d", &money);            //輸入金額
    ten = money / 10;               //先找使用10塊的數量
    money -= ten * 10; 
    fif = money / 5;                //找剩下可以用5塊的數量
    money -= fif * 5;
    one = money;                    //找剩下可以用1塊的數量
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ten, fif, one);
    return 0;
}