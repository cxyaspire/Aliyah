#include <stdio.h> 
int main()
{ int i, number; 
  char s[10];
  printf ("Enter a string:");	/*输入字符串*/	
  i=0;	
  while ((s[i] = getchar())!='\n')
   i++;	
   s[i]='\0';
  n =0;	
  for (i= 0; s[i]!='\0'; i++)
    if (s[i] <= '9' && s[i] >= '0') 
      n=n*10+(s[i]-'0');
   printf("digit = %d\n", n); 
   return 0;}
