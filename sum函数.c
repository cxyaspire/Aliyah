#include <stdio.h>
//c的编译器自上而下分析代码 
void sum(int begin,int end)//函数头:返回类型 函数名（参数表） 
//以下为函数体 
{int i,sum=0;
for(i=begin;i<=end;i++)
{sum+=i;
}
printf("%d到%d的和为%d\n",begin,end,sum);
}

int main()
{sum(1,10);//给的值要注意与参数类型匹配 
 sum(20,30);
 sum(35,45);
 return 0;

}
