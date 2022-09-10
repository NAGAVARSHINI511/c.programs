#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[50], str2[50], temp[50] ;
  printf("1st string:");
  gets(str1);
  printf("2nd string:");
  gets(str2);
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  printf("after swapping:\n");
  printf("1st string: %s\n2nd string: %s",str1,str2);

  return 0;
}