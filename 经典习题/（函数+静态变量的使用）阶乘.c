#include <stdio.h>
double fact_s(int n);
int main()
{
  int i, n;
  printf("Input n:");
  scanf("%d", &n);
  for(i=1; i <= n; i++)
  printf("%3d!=%.0f\n", i, fact_s(i)); /* 输出i和i! */
  return 0;
}
double fact_s(int n)
{static double f = 1; /* 定义静态变量，第一次赋值为1 */
 f = f * n; /* 在上一次调用时的值上乘n */
 return(f);
}
//fact_s()函数中并没有循环语句，它是靠静态变量f保存着上次函数调用时，计算得到的(n-1)!值，再乘上n，实现n！的计算。
