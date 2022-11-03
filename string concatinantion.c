#include <stdio.h>

int main(void) {
  char str1[25], str2[25];
  int i = 0, j = 0;
  printf(" Enter First String:");
  scanf("%s", str1);
  printf("\n Enter Second String:");
  scanf("%s", str2);
  while (str1[i] != '\0')
    i++;
  while (str2[j] != '\0') {
    str1[i] = str2[j];       #string concatination is nothing but joining or clubing 2 strings into a single string
    j++;
    i++;
  }
  str1[i] = '\0';
  printf("\n Concatenated String is ");
  puts(str1);
}
