#include <stdio.h>
#include<math.h>

int main(void) {
  int A[10][10];
  int i, j, n, sum = 0, trace = 0;
  float normal;
  printf("Enter the order of the matrix\n");
  scanf("%d", &n);
  printf("Enter the n coefficients of the matrix \n");
  for (i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j) {
      scanf("%d", &A[i][j]);
      sum = sum + A[i][j] * A[i][j];
    }
  }
  normal = sqrt(sum);
  printf("The normal of the given matrix is = %.2f\n", normal);
  for (i = 0; i < n; ++i) {
    trace = trace + A[i][i];
  }
  printf("Trace of the matrix is = %d\n", trace);
  return 0;
}