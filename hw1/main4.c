#include <stdio.h>

#include <string.h>

int main() {

    char str[100];  // 假設字串最大長度為 100

    int length, i;

    // 讀取字串

    scanf("%s", str);

    // 獲得字串的長度

    length = strlen(str);

    // 反向輸出字串

    for(i = length - 1; i >= 0; i--) {

        printf("%c", str[i]);

    }

    printf("\n");

    return 0;

}