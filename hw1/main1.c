#include <stdio.h>

#include <string.h>

int main() {

    char str[100];  // 假設最大輸入字串長度為 100

    int i, count;

    // 讀取輸入字串

    scanf("%s", str);

    // 遍歷字串並計算相同字元的出現次數

    for(i = 0; str[i] != '\0'; i++) {

        count = 1;  // 預設當前字元出現一次

        // 如果當前字元與下一個字元相同，計數器加一

        while(str[i] == str[i + 1]) {

            count++;

            i++;  // 跳過重複的字元

        }

        // 輸出字元及其出現的次數

        printf("%c%d", str[i], count);

    }

    return 0;

}