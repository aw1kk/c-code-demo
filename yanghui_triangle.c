#include <stdio.h>

void printYanghuiTriangle(int rows) {
    int triangle[100][100] = {0};
    int i, j;

    if (rows <= 0 || rows > 99) {
        printf("请输入 1 到 99 之间的行数。\n");
        return;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d   ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("请输入杨辉三角的行数：");
    scanf("%d", &rows);

    printYanghuiTriangle(rows);
    return 0;
}
