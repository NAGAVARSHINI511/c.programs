#include <stdio.h>

int main(void) {
  int n, m, sum = 0;
  printf("enter a number whose sum need to be found\n");
  scanf("%d", &n);
  do {
    m = n % 10;
    n = n / 10;
    sum = sum + m;
  } while (n != 0);
  printf("sum is %d \n", sum);

  return 0;
}
