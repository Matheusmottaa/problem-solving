#include <stdio.h>

int main()
{
  int x, i, j = 0;
  scanf("%d", &x);
  if (x % 2 == 0)
    i = x + 1;
  else
    i = x;
  for (j; j < 6; j++)
  {
    printf("%d\n", i);
    i += 2;
  }
  return 0;
}