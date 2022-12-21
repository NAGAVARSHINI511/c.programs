//program to find string length//
#include <stdio.h>

int main(void) {
  char str1[100];
  int len = 0;
  printf("Enter string whose length is to be found: ");
  scanf("%s", str1);
  while (str1[len] != '\0')
    len++; // here the length of string is calculated.
  printf("Length of the string is %d", len);
}
