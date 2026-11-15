#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int counts[10] = {0};             //数组初始化！
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
        {
            counts[0]++;              //是哪个数字就在代表哪个数字的盒子里丢一个小球
        }
        else 
        {
           while (x > 0) 
           {
              counts[x % 10]++;
              x /= 10;
            }
        }
    }
    //找到出现最多的数字
    int M = 0;
    for (int d = 0; d < 10; d++)
        if (counts[d] > M) 
          M = counts[d];
   // 输出："M:" 然后每个命中数字前加一个空格
    printf("%d:", M);
    for (int d = 0; d < 10; d++) 
    {
        if (counts[d] == M)
        {
            printf(" %d", d);   // 注意：%d 前面有一个空格
        }
    }
    printf("\n");

    return 0;
}
