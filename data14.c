#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char ch[100001];
    while(scanf(" %s",&ch)!=-1){
        int flag = 0;
        int num;
        num=strlen(ch);                        //找string的長度
        for (int i = 0; i < num / 2; i++)      //對稱一一看是否相同，一旦不同flag即設為1
        {

            if (ch[i] != ch[num - i - 1])
            {
                flag = 1;
                break;
            }
            }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}