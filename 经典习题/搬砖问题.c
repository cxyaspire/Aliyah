#include <stdio.h>
int main()
{
  //写法一
for (men = 0; men <=15; men++)
for (women = 0; women <= 22; women++)
{ child = 45 - women - men;
  if (men *3+women*2+child*0.5==45)
   printf("men=%d women=%d child=%d\n", men, women, child);
}	
  //写法二：比较循环次数	
for (men = 0; men <= 45; men++)
for (women = 0; women <= 45; women++) 
for (child = 0; child <= 45; child++)
if ((men+women+child==45) && (men*3+women*2+child*0.5==45)
printf("men=%d women=%d child=%d\n", men, women, child);

return 0;

}
