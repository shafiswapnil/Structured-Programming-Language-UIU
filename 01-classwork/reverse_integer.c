#include <stdio.h>

int main()
{
  int input, term, new_term = 0;
  scanf("%d", &input);

  while (input > 0) // is not completed yet
  {
    term = input % 10;
    new_term = term * 10 + term;
    input = input / 10;
  }
  printf("%d", new_term);

  return 0;
}