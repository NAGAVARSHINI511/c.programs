#include <stdio.h>
int length(char s[100]);
int main(void) {
  int len;
  char str[100];
  printf("enter the string");
  scanf("%s", str);
  len = length(str); //function length() counts the number of letters and returns it
  printf("the length of string is %d", len);
  return 0;
}
int length(char s[100])
{
  int i, count = 0;
  for (i = 0; s[i] != '\0'; i++)
    count++;
  return count;
}
