/* format specifier
 * %d = digit / int
 * %i = digit / int
 */

#include <stdio.h>

int main()
{
  int x, y; // declaration
  x = 10, y = 20;

  int sum = x + y;

  printf("X + Y = %d\n", sum);

  return 0;
}