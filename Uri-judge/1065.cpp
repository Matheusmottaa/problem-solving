#include <stdio.h>

int main()
{
  int numbers, i = 0, j = 0;
  for (j; j < 5; j++)
  {
    scanf("%d", &numbers);
    if (numbers % 2 == 0)
      i++;
  }
  printf("%d valores pares\n", i);
  return 0;
}