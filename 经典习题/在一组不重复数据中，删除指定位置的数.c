#include <stdio.h>
int main()
{ int a[12]={1, 3, 5, 0, -3, 6, 9, 15, 7,2,-8, 10}, i, del_at; 
 scanf("%d", &del_at);/*输入待删除指定位置*/ 
 for( i=del_at; i<11; i++)
 a[i]=a[i+1];/*各元素值依次被后续元素值替代*/
 for(i=0;i<11;i++)/*输出数组时不包括最后一个元素*/ 
  printf("%4d", a[i]); 
 printf("\n"); 
 return 0;}
