#include <stdio.h>

#include <ctype.h>  // 用於檢查字元是否為數字

int main() {

    char str[100];  // 假設最大輸入字串長度為 100

    int i = 0;

    int count;

    

    // 讀取輸入字串

    scanf("%s", str);

    // 遍歷字串，解碼並輸出

    while (str[i] != '\0') {

        char ch = str[i];  // 當前字元

        count = 0;

        // 跳過字元後的數字

        i++;

        while (isdigit(str[i])) {

            count = count * 10 + (str[i] - '0');  // 計算數字（可能有多位）

            i++;

        }

        // 根據數字重複字元並輸出

        for (int j = 0; j < count; j++) {

            printf("%c", ch);

        }

    }

    return 0;

}