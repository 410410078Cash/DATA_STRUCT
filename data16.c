#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char target[200];
    char st[600];
    int count;
    while(scanf("%s",target)!=EOF){
        count = 0;
        scanf(" %s",st);
        char *index = st;
        char *search;
        while(*index!='\0'){                   //重複直到結尾為止
            search = strstr(index, target);    //找到出現一次相符的位址
            if(search==index){                 //當for迴圈到該相符位址，count++
                count++;
            }
            index++;                           //相符後經過這裡會使strstr找新的相符位址。
        }
        printf("%d\n", count);
    }
    return 0;
}