#include <stdio.h>
int main(void){
    int x, y;
    while(scanf("%d %d",&x,&y)!=EOF){      //輸入
        if(x*x+y*y<=100*100 && x>=-100 && x<=100 && y>=-100 && y<=100){  //判斷使否再圓形內
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}