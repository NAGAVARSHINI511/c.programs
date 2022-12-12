//binomial coefficient//
#include <stdio.h>
int factorial(int);
int main(void) {
  int n, r, binom;
printf("Enter value of n and r\n");
scanf("%d%d", &n, &r);
if(n<0 || r<0 || n<r)
printf("Invalid Input");
else
{
  binom =factorial(n)/(factorial(r)*factorial(n-r));  //binomial coefficient=n!/r!*(n-r)!
printf("Result = %d",binom);

}
  return 0;
}
int factorial(int n)
{
if(n == 0)
return 1;

else

return(n*factorial(n-1));
}
