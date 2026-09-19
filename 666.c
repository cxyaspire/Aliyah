#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("请输入两个整数eg.3,5: ");
    scanf("%d,%d", &a, &b);
    
    if (a <= b)
        printf("%d,%d\n", a, b);  // a <= b，直接输出
    else
     {
		   c=a; 
		a=b;
        b=c;
       
        printf("%d,%d\n",a,b);  // a > b，交换输出
}
    return 0;
}
