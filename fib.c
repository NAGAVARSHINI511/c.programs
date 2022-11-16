#include <stdio.h>

int main(void) {
  int n, i;
  printf(" Enter the value of n \n ");
  scanf("%d", &n);
  printf("Fibonacci series\n ");
  for (i = 1; i <= n; i++) {
    printf(" %d\n", fib(i));
  }
  return 0;
}
int fib(int n) {
  if (n == 0 || n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else
    return (fib(n - 1) + fib(n - 2)); //recursion function
}
