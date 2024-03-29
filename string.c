#include <stdio.h>

int main() {

  char str[30];
  printf("Enter your name: ");
  fgets(str, sizeof(str), stdin);
  printf("%s", str);

  return 0;
}