#include <stdio.h>
#include <math.h>

int main()
{
  int input;
  scanf("%d", &input);

  double p;
  p = log(input) / log(2);

  if (ceil(p) == floor(p))
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}