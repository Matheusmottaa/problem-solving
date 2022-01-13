#include <stdio.h>

int main()
{
  int n, x;
  int in = 0, out = 0;
  int i = 0;
  scanf("%d", &n);
  for (i; i < n; i++)
  {
    scanf("%d", &x);
    if (x >= 10 && x <= 20)
      in++;
    else
      out++;
  }
  printf("%d in\n%d out\n", in, out);
  return 0;
}