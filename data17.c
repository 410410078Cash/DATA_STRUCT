#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char vacab[1001];
    char ch[1000][1000];
    int index = 0;
    int go;
    int flag;
    while(scanf("%s",vacab)!=EOF){
        flag = 0;
        for (int i = 0; i <= index;i++){
            for (int k = 0; k <= strlen(ch[i]);k++){
                    if((int)vacab[k]>=65 && (int)vacab[k]<=90){         //將大寫轉成小寫
                        vacab[k] = (char)((int)vacab[k] + 32);
                    }
            }
                if (strlen(vacab) == strlen(ch[i])){                    //如果予已記錄的單字長度相同，判斷是否為同樣單字
                    go = 0;
                    for (int j = 0; j <= strlen(ch[i]); j++){
                        if (ch[i][j] != vacab[j])                       //只要有不同，立即確認為不同單字，go=1，可離開比較區域。
                        {
                            go = 1;
                            break;
                        }
                    }
                    if (go == 0){                                      //如果go==0，代表重複單字，flag=1。
                        flag = 1;
                        break;
                    }
                    else{                                             
                        continue;
                    }
                break;
            }
        }
        if(flag==0){                                                  //如果flag=0，保存新單字
            for (int i = 0; i < strlen(vacab);i++){
                ch[index][i] = vacab[i];
            }
            index++;
        }
    }
    for (int i = 0; i <index;i++){                                  
        for (int j = 0; j < strlen(ch[i]);j++){
            printf("%c", ch[i][j]);
        }
        if(i!=index-1){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }
    return 0;
}