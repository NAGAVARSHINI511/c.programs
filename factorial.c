//factoial program
#include <stdio.h>

int main(void) {
  long int ajfact(int);
  int n;
  printf("Enter the number\n");
  scanf("%d", &n);
  printf("\nThe Factorial of %d is %ld", n, ajfact(n));
}
long int ajfact(int n) {
  if (n <= 1)
    return 1;
  else
    return (n * ajfact(n - 1));
}
