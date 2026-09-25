/*about 循环结构（重复结构）
1、while语句
  一般形式：while(表达式） 语句
  不要忽略给i和sum赋初值
  在循环体中应有使循环趋于结束的语句
2、do...while语句
  一般形式：do
             {语句}    把循环体用花括号括起来可使其看起来更清晰 
			while（表达式）； 
3、for语句
   一般形式：for(表达式1；表达式2；表达式3）
      分别对应循环变量赋初值，循环条件，循环变量增值
	表达式1可省略，即不设置初值，但表达式1后的分号不能省略
	表达式2也可省略，无限循环
	表达式3当然也能省略，但此时应设法保证循环能正常结束
4、循环的嵌套
5、break语句提前终止循环
    break； 
6、continue语句提前结束本次循环
    continue；
*/
#include <stdio.h>
int main(void)
{int i=1;//首先要先定义i啊，不然后面的for语句用不了 
 int sum=0;
 
 //版本一：for语句 
 for(;i<=100;i++) 
 {sum+=i;} 
 printf("1+2+...+n=%d\n",sum);//printf写在外面 
 printf("i=%d\n",i);
 
 //版本二：while语句
 i=1;sum=0;          //重置数字无需再定义 
 while(i<=100) 
 {sum+=i;
  i++; 
 }
 printf("1+2+...+n=%d\n",sum);
 printf("i=%d\n",i);
 
 //版本三：do...while语句
 i=1;sum=0;
 do 
  {sum+=i;
   i++;
  }
 while(i<=100); 
 printf("1+2+...+n=%d\n",sum);
 printf("i=%d\n",i);	
	
 return 0;
 } 
