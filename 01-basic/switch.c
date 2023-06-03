#include <stdio.h>

int main()
{
  int x;
  scanf("%d", &x);

  switch (x)
  {
  case 0:
    printf("zero\n");
    break;

  case 1:
    printf("one\n");
    break;

  case 2:
    printf("two\n");
    break;

  case 3:
    printf("three\n");
    break;

  default:
    printf("Invalid number\n");
  }

  return 0;
}