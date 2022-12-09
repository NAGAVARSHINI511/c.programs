//program to check the palindrome or not//
#include <stdio.h>
#include <string.h>
int main(void) {
  int num, temp, rev;
  printf("Enter the number:\n");
  scanf("%d", &num);
  printf("The reversed number is:\n");
  while (num != 0) {
    temp = num % 10;
    printf("%d", temp);
    num = num / 10;
  }
  num = rev;
  if (rev == num)
    printf("\npalindrome");
  else
    printf("\n not a palindrome");

  return 0;
}
