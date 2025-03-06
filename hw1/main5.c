#include <stdio.h>

int main() {
    int n;

    // 讀取金字塔的層數
    scanf("%d", &n);

    // 輸出金字塔
    for (int i = 1; i <= n; i++) {
        // 輸出空格
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 輸出數字
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i) {
                printf(" "); // 數字之間有空格
            }
        }
        // 換行
        printf("\n");
    }

    return 0;
}