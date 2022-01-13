#include <stdio.h>

int main()
{
  int begin = 1;
  for (begin; begin <= 100; begin++)
  {
    if (begin % 2 == 0)
      printf("%d\n", begin);
  }
}