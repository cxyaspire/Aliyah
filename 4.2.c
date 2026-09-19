#include <stdio.h>

/*int a,b;
 printf("请输入两个整数(eg.5,3)：");// 此处不需要%d,主要起一个提示作用，要让计算机看懂 
 scanf("%d,%d",&a,&b);//此处才需要赋值，使用% 
 if(a>b)
   c=a;//把a的值赋给c，要注意顺序 
   a=b;
   b=c;
   printf("%d,%d\n",b,a);
 else
 {
 printf("%d,%d\n",a,b);
 }*/
	#include <stdio.h>

int main()
{
    int a, b;
    
    printf("请输入两个整数(eg.5,3): ");
    scanf("%d,%d", &a, &b);
    
    if (a <= b)
        printf("%d,%d\n", a, b);  // a <= b，直接输出
    else
        printf("%d,%d\n", b, a);  // a > b，交换输出
    
    return 0;
}
	
	
	
	
	
	
	


