//Program to sort the elements using bubble sort//
#include<stdio.h>
void main()
{
  int a[50],temp,n,i,j;
  int flag;
  printf("enter the size of elements:\n");
  scanf("%d",&n);
  printf("enter the elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  {
  for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-1-i;j++)
    if(a[i]>a[i+1])
    {
     temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;
     flag=1;
    }
   if(flag==0)
   break;
   }
   printf("the sorted elements are:\n");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
  }
}
