#include <stdio.h>

int main()
{
  int a, b, c, sum;
  scanf("%d%d%d", &a, &b, &c);
  sum = a + b + c;

  if (((a > 0 && a < 180) && (b > 0 && b < 180) && (c > 0 && c < 180)) && sum == 180)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}