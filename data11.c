#include <stdio.h>
#include <stdlib.h>
int main(void){
    int r, c,val;
    while(scanf("%d %d",&r,&c)!=EOF){
        int arr[r][c];
        for (int i = 0; i < r;i++){               //輸入矩陣
            for (int j = 0; j < c;j++){
                scanf("%d", &val);
                arr[i][j] = val;
            }
        }
        for (int i = 0; i < c;i++){               //r、c倒過來，直接printf
            for (int j = 0; j < r;j++){
                if(j==r-1){
                    printf("%d", arr[j][i]);
                }
                else{
                    printf("%d ", arr[j][i]);
                }
            }
            printf("\n"); 
        }
    }
    
    return 0;
}