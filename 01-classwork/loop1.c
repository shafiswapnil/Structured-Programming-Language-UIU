#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    if (i == input)
    {
      printf("%d", i);
    }
    else
    {
      printf("%d, ", i);
    }
  }
}