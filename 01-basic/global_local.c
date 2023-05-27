// a variable declared in a function is called local variable
// a variable declared out of any function is called global variable
// global and local scope are also applied in function in c
// local overrites global scope

// execution time
// reduce compiler work load

#include <stdio.h>
#define PI 3.1416 // define value at the first

int g = 20; // global variable

int main()
{
  const float a = 10.1; // constant variable

  int g = 5; // local variable
  printf("%f\n", a * PI);

  return 0;
}