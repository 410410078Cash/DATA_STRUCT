#include <stdio.h>
int main(void){
    int x, y;
    while (scanf("%d %d", &x, &y)!=EOF){         //輸入x、y
        if(x>=0&& x<=100 && y>=0 &&y<=100){      //判斷使否再正方形裡面
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}