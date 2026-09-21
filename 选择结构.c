/*选择结构
一、if语句
   一般形式：if（表达式） 语句1； 
                  【else语句2】；
    语句1、2可以是一个简单的语句，也可以是一个复合语句，还可以是另一个if语句 ，可使用{}完成内嵌 
二、关系运算符与关系表达式
    关系运算符：< <= > >= == != 前四种优先级高于后两种 
三、逻辑运算符与逻辑表达式
    AND\&&  OR\||  NOT\!     优先级：非高于与高于或  
四、条件运算符与条件表达式
    一般形式 ;表达式1？表达式2：表达式3
五、switch语句
    一般形式:switch（表达式）
	         {
			 case 常量n:语句n
			 dafault ：  语句n+1
	       	}
    
    优先级 ：非高于算术高于关系高于&&||高于赋值 ！！！ */

#include <stdio.h>
int main(void)
{//判断某个数字的奇偶 
	int a;
	scanf("%d",&a);
	if(a%2==0)    
	  printf("这个数字是一个偶数\n");
	else
	  printf("这个数字是一个奇数\n");
	  
 //把百分制成绩转换为等级
    int score,grade;
    scanf("%d",&score);
    printf("你本次崩铁浓度测试的分数为%d分(满分100分)\n",score);//错误（已修正）后面的score没有传入 
    grade=score/10;//为后面的case做好准备 
    switch(grade)//括号内为选择的对象 
     {case 0://需要空格的只有case和后面的变量 
	  case 1    :     printf("你的浓度含量等级为F\n");break; //错误（已修正）；case后面跟一个常量！！没办法识别范围，0-20会被识别为-19 
      case 2: 
	  case 3:printf("你的浓度含量等级为D\n");break;
      case 4: 
	  case 5:printf("你的浓度含量等级为C\n");break;
      case 6: 
	  case 7:printf("你的浓度含量等级为B\n");break;
      case 8: 
	  case 9:
	  case 10:printf("你的浓度含量等级为A\n");break;
	  default:printf("你以为你是银狼啊，成绩无效\n");break;//处理非法输入量 
	 }
     //如果想用区间写法的话就用if语句
	 
 //找出三个数中的最大值
     float b,c,d;
	 scanf("%f%f%f",&b,&c,&d);
	 if(b>c&&b>d) 
	    printf("%.1f最大",b);
	 else if(c>b&&c>d) 
	    printf("%.1f最大",c);
	 else if(d>c&&d>b) 
	    printf("%.1f最大",d); 
	 else if(b==c&&b==d) 
	    printf("%.1f最大",b);
	 else if(b==c&&b>d) 
	    printf("%.1f最大",b);
	 else if(d==c&&c>b) 
	    printf("%.1f最大",c);
	 else if(b==d&&b>c) 
	    printf("%.1f最大",b);
	//另写法
	  float max;
	  max=b;
	  if(c>max) max=c;
	  if(d>max) max=d;
	  printf("%.1f最大\n",max); 
	
	
     
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
