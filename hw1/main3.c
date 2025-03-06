#include <stdio.h>

#include <math.h>

int main() {

    char bin[9];  // 假設最大輸入字串長度為 8 位二進位數字 + 1 終止符

    int decimal = 0;

    // 讀取 8 位二進位數字

    scanf("%s", bin);

    // 計算二進位數字的十進位值

    for (int i = 0; i < 8; i++) {

        if (bin[i] == '1') {

            decimal += (int)pow(2, 7 - i);  // 2 的 (7-i) 次方，對應二進位數字的權重

        }

    }

    // 輸出十六進位數字

    printf("%X\n", decimal);  // %X 會輸出十六進位大寫格式

    return 0;

}