#include <stdio.h>

int main()
{
  int n, x;
  int i = 0;
  scanf("%d", &n);
  for (i; i < n; i++)
  {
    scanf("%d", &x);
    if (x > 0)
    {
      if (x % 2 == 0)
        printf("EVEN POSITIVE\n");
      else
        printf("ODD POSITIVE\n");
    }
    else
    {
      if (x < 0)
      {
        if (x % 2 == 0)
          printf("EVEN NEGATIVE\n");
        else
          printf("ODD NEGATIVE\n");
      }
      if (x == 0)
        printf("NULL\n");
    }
  }
  return 0;
}