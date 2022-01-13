#include <stdio.h>

int main()
{
  int number, high = 0, pos;
  int i;
  for (i = 1; i <= 100; i++)
  {
    scanf("%d", &number);
    if (high < number)
    {
      high = number;
      pos = i;
    }
  }
  printf("%d\n%d\n", high, pos);
  return 0;
}