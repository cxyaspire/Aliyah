#include <stdio.h>
int main()
{//while语句 
	int i=1,sum=0;
	while(i<=100)
	{
	 sum=sum+i;
	 i++;//记得加分号 
	}
	printf("sum=%d\n",sum);
	
//do while
     sum=0,i=1;
	 do
	 {//添加花括号更加美观且便于理解 
	  sum=sum+i;
	  i++;
	 }	
	 while(i<=100);//此处有分号 
	 printf("sum=%d\n",sum);
	
//for 语句1（一般为循环变量初始值+循环条件+循环变量增值）
    for(sum=0,i=1;i<=100;i++) 
    sum=sum+i;//便捷写法为sum+=i ,最后的分号一定不要忘记 
	printf("sum=%d\n",sum);
	
//for语句2
    sum=0,i=1;
	for(;i<=100;i++) //可以将初始赋值提至前面，但第一个分号不能省略 
	sum+=i;
	printf("sum=%d\n",sum);
	
//for语句3
    sum=0,i=1;
	for(;i<=100;) //循环变量增值可放置后面 
	{
	sum+=i;
	i++;
	}
	printf("sum=%d\n",sum);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}




