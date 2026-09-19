#include <stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("请输入两个整数例如：3，5\n");
 	scanf("%d,%d",&a,&b);
 	
 	if(a<=b)
 	printf("你输入的是：%d,%d",a,b);
 	else
 	{
 		c=a;
 		a=b;
 		b=c;
 		printf("已经交换了值了%d,%d",a,b);
	 }
	 return 0;
  }
