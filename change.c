#include <stdio.h>
int main()
{
	float price_1;
	printf("请输入产品价格（元）为：");
	scanf("%f",&price_1);
	float price_2;
	printf("请输入支付金额（元）为：");
	scanf("%f",&price_2);
	float change=price_2-price_1;
	printf("应找金额为%.2f元",change);
	
	
	
	
	
	
	
	
	return 0;
}
