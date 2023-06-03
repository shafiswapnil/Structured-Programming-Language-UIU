#include <stdio.h>

int main()
{
  float score;
  scanf("%f", &score);

  if (score >= 90 && score <= 100)
  {
    printf("Grade: A\n");
  }
  else if (score >= 86 && score <= 89)
  {
    printf("Grade: A-\n");
  }
  else if (score >= 82 && score <= 85)
  {
    printf("Grade: B+\n");
  }
  else if (score >= 78 && score <= 81)
  {
    printf("Grade: B\n");
  }
  else if (score >= 74 && score <= 77)
  {
    printf("Grade: B-\n");
  }
  else
  {
    printf("Grade: F\n");
  }

  return 0;
}