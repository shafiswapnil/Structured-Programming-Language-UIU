#include <stdio.h>

int main()
{
  int input, sum = 0;
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    if (i % 2 == 1) // odd
    {
      sum = sum + i; // odd ashle sum e jog hocche
    }
    else // even
    {
      sum = sum - i; // even number sum variable e biyog hocche
    }
  }

  printf("Result: %d\n", sum);

  return 0;
}