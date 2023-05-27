#include <stdio.h>

int main()
{
  int x;
  printf("Enter an integer\n");
  scanf("%d", &x);

  if (x >= 0)
  {
    printf("Positive\n");
  }
  else
  {
    printf("Negative\n");
  }
}