#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    // first approach
    if (i % 2 == 1)
      printf("1");
    else
      printf("0");

    if (i != input)
      printf(",");

    // second approach
    /*
    printf("%d",t);
    */
  }
}