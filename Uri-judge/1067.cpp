#include <stdio.h>

int main()
{
  int x, i = 0;
  scanf("%d", &x);
  if (x >= 1 && x <= 1000)
  {
    for (i; i <= x; i++)
    {
      if (i % 2 != 0)
        printf("%d\n", i);
    }
  }
}