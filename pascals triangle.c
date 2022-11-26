#include <stdio.h>

int main(void) {
  
  int i,j,n,coef,rows,space;
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)                       //this for loop is keep control of the curser
    {
      for(space=0;space<=n-i;space++)     //this for loop is to print space    
      
          printf(" ");
          for(j=0;j<=i;j++)             //this for loop is to print the num 
            {
            if(j==0||i==0)
              coef=1;
              else
              coef=coef*(i-j+1)/j;
              printf("%4d",coef);
            }
        
      printf("\n");
    }
  
  return 0;
}
