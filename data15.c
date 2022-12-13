#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){

    int count[26]={0};
    int num = 0;
    char chh[10000];
    while(scanf("%s", chh)!=EOF){
        num++;
        for (int i = 0; i < strlen(chh);i++){                 //解決大小寫不同的問題，記錄數量進count[]
            if ((int)chh[i] >= 97 && (int)chh[i]<= 122)
            {
                count[(int)chh[i] - 97]++;
            }
            else if((int)chh[i]>=65&&(int)chh[i]<=90){
                count[(int)chh[i] - 65]++;
            }
        }
    }
    printf("%d\n", num);
    for (int i = 0;i<26;i++){
        if(count[i]!=0){
            printf("%c : %d\n",(char)i+97,count[i]);
        }
    }
    return 0;
}