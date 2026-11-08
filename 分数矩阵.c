// 矩阵对角线上的元素始终是1/1，对角线两边分数的分母逐个递增。
    请求出这个矩阵所有元素的和。
#include <stdio.h>
int main() 
{
    int n;
   while (scanf("%d", &n) == 1 && n != 0) 
   {
    double sum = (double)n; 
     for (int k = 2; k <= n; k++)//k代表分母
         {
             sum += 2.0 * (n - k + 1) / k;
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}
