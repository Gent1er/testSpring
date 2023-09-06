#include <stdio.h>

int main() {
    int rows = 4; // 设置行数
    int i, j;

    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" "); // 打印空格以产生倒三角形状
        }

        for (j = 1; j <= i; ++j) {
            printf("* "); // 打印星号
        }

        printf("\n"); // 换行
    }

    return 0;
}