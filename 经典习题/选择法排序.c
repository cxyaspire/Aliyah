#include <stdio.h>
int main()
{int n;
 scanf("%d",&n);
 int k,index,a[n],i;
 for(k = 0; k< n-1; k++)//k表示下标
 {
  index = k;
  for(i=k+1;i<n; i++) 
  { if(a[i] < a[index])//后一项小于前一项
    {index = i; }
  }
  temp = a[index]; //交换值
  a[index] = a[k]; 
  a[k] = temp;}
 return 0；
}
