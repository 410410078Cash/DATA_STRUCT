#include <stdio.h>
#include <stdlib.h>
int main(void){
    char ch;
    int data,r1,z1,r2,z2;
    scanf("%d", &data);
    for (int i = 0; i < data;i++){
        scanf(" %c", &ch);
        scanf("%d", &r1);
        scanf("%d", &z1);
        scanf("%d", &r2);
        scanf("%d", &z2);
        if(ch=='+'){
            printf("%d %d\n", r1 + r2, z1 + z2);     //虛數加法 分別加
        }
        else if(ch=='-'){
            printf("%d %d\n", r1 - r2, z1 - z2);     //虛數減法分別減
        }
        else if(ch=='*'){
            int ans1 = r1 * r2 - z1 * z2;            //乘法要交叉乘
            int ans2 = r1 * z2 + r2 * z1;
            printf("%d %d\n", ans1, ans2);
        }
    }
    return 0;
}