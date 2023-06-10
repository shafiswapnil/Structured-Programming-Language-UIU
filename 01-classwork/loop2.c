#include <stdio.h>

int main()
{
  int input, value = 1;
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    printf("%d, ", value);
    value += 2;
  }

  return 0;
}