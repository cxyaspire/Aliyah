#include <stdio.h>

int main(void)
{
    int N;
    int a[10][10];
    scanf("%d", &N);

    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    int num = 1;

    while (num <= N * N) {
        // 从左到右
        for (int j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        // 从上到下
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // 从右到左
        for (int j = right; j >= left; j--)
            a[bottom][j] = num++;
        bottom--;

        // 从下到上
        for (int i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }

    // 输出，每个数字占 3 位
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }

    return 0;
}
