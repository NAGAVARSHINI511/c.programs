#include <stdio.h>

int main(void) {
  float sum = 0, sumvar = 0, a[50], var, sd, mean;
  float *ptr;
  int n, i;
  printf("enter the number of elements\n");
  scanf("%d", &n);
  printf("ente %d array elements\n", n);
  for (i = 0; i < n; i++) {
    scanf("%f", &a[i]);
  }
  ptr = a;
  for (i = 0; i < n; i++) {
    sum = sum + *ptr;
    ptr++;
  }
  mean = sum / n;
  ptr = a;
  for (i = 0; i < n; i++) {
    sumvar = sumvar + (pow((*ptr - mean), 2));
    ptr++;
  }
  var = sumvar / n;
  sd = sqrt(var);
  printf("sun=%f\n", sum);
  printf("mean=%f\n", mean);
  printf("standarad deviation=%f\n", sd);

  return 0;
}