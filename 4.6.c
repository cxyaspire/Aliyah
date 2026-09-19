#include <stdio.h>
int main()
{
	char grade;//引入字符 
	scanf("%c",&grade);
	printf("Your score:");
	switch(grade)//以下为switch经典结构 case常量：语句 
	{
		case'A':printf("85~100\n");break;
		case'B':printf("70~84\n");break;
		case'C':printf("60~69\n");break;//break使流程转到switch语句的末尾 
		case'D':printf("<60\n");break;
		default:printf("enter data error!\n");
		
	}
	return 0;
}
