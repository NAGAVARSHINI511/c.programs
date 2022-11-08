#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
      int pa,pb;  
    pa = *a;
    pb = *b;  
    *a = pa + pb;
    *b = abs(pa - pb);
}

int main(void) {
   int a, b;
  printf("enter the value of a and b\n");
  scanf("%d%d",&a,&b);
    int *pa = &a, *pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);
  
}
