#include <stdio.h>
#include <stdlib.h>
void func(int n1,int n2){                    //進行輾轉相除
    if(n1%n2==0){                            //相除==0才終止 
        printf("%d\n", n2);
    }
    else{
        func(n2, n1 % n2);
    }
    return;
}
int main(void){
    int num1, num2;
    while(scanf("%d %d", &num1, &num2)!=EOF){
        if(num1>=num2){                       //看哪個數字大
            func(num1, num2);
        }
        else{
            func(num2, num1);
        }
    }
    return 0;
}