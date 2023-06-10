#include <stdio.h>

int main()
{
  int input, sum = 0;
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    sum = sum + ((i * i) * (i + 1));
  }

  printf("Result: %d\n", sum);

  return 0;
}
