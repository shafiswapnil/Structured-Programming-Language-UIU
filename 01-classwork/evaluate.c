#include <stdio.h>

int main()
{
  float a, b;
  char exp, skip;

  // skipping enter as a character in skip variable
  scanf("%f%c%c%f", &a, &skip, &exp, &b);

  if (exp == '+')
  {
    printf("Addition: %f\n", a + b);
  }
  else if (exp == '-')
  {
    printf("Subtraction: %f\n", a - b);
  }
  else if (exp == '*')
  {
    printf("Multiplication: %f\n", a * b);
  }
  else if (exp == '/')
  {
    if (b == 0)
      printf("Division: Zero as divisor is not valid!");
    else
      printf("Division: %f\n", (a / (float)b));
  }
  else
  {
    printf("Division: Zero as divisor is not valid!");
  }

  return 0;
}