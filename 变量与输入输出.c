/*一、1、常量包括整型常量、实型常量（指数形式如112.34e3或者0.14E-13//eE前有数，后一定为整数）、
字符常量（普通字符如'a',转义字符详见40页，字符串常量如"girl"）以及符号常量 
  2、变量
  3、常变量（有名字的不变量eg、）
  4、标识符（只能由字母、数字（不能排首位0 、下画线组成） 
二 、数据类型（详见43页）
   整型（int，46）、字符型（char，48）、浮点型（float，double，50）
三、运算符与表达式（详见52页） 
   算术运算符自左向右，赋值运算符自右向左 
   赋值的类型转换（61）
四、printf（67），scanf（73），putchar（76），getchar（77）
     格式：putchar(某个字符），某字符=getchar()                                                          */


#include <stdio.h>
int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);//在小黑输入数字的时候也要注意中间有空格 
  printf("a+b=%d\na-b=%d\na*b=%d\na/b=%d\n",a+b,a-b,a*b,a/b);	//易错：printf不要老是少拼一个t ,注意检查单词拼写！ 
  //整数和整数相除结果为整数（截断小数）
  printf("a/b=%.2f\n",(float)a/b)	;//如果想让除法结果输出为小数，只把d改成f是不够的，应先强制转换a为浮点数！ 
  
  int r;
  float pi=3.14;//pi为数字，用浮点数定义
  scanf("%d",&r) ;
  float s=pi*r*r;//在前面定义公式时要注意公式所用的每个值都已给出，此行若与scanf交换位置则输出为0 
  printf("已知圆的半径为%d米,则其面积为%.2f平方米\n",r,s);
  
  int C;
  float F;
  scanf("%d",&C);//&不要丢 
  F=C*1.8+32;
  printf("当前天气的摄氏温度为%d，华氏温度为%.2f\n",C,F);
  
  char x='y';//易混：单引号只能保存单个字符 
  char y='a';
  char z='o';
  putchar(x);//注意：putchar一次只能输出一个字符，getchar同理 
  putchar(y);
  putchar(z);
  putchar('\n');//注意：此时一定要带‘’
	
  char p[]="我想放假";//“”与【】配合储存字符串 
  char q[]="为什么";
  char m[]="国庆和中秋不连放";
  printf("%s\n%s\n%s\n",p,q,m);//注意：此时无需带【】
  puts(p);	//也可使用puts进行输出字符串 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

 
