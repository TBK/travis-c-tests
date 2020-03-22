#include <stdio.h>

int main() {
  printf("Hello, world!\n");
#if defined __s390x__ || __zarch__
  return 1;
#else
  return 0;
#endif
}
