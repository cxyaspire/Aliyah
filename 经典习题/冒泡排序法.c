#include <stdio.h> 
int main()
{ int i, j, n, t, a[10];
  scanf("%d",&n);
 for(i= 0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=1;i<n; i++)
 { for(j=0;j<n-i;j++)//注意此处循环条件
 {
  if(a[j]>a[j+1])
  { t=a[j];
    a[j]=a[j+1]; 
    a[j+1]=t;}
  }
 }
for(i= 0; i<n; i++)
printf("%d", a[i]); 
 printf("\n");
 return 0;
}
