#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int i = 5;
  for (i = 0; i < 5; i++) printf("%s", str);
  printf("hello %d", i);
  return 0;
}
