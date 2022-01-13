#include <stdio.h>

int main()
{
  float num;
  int i = 0, j = 0;
  for (j; j < 6; j++)
  {
    scanf("%f", &num);
    if (num > 0)
      i++;
  }
  printf("%d valores positivos\n", i);
  return 0;
}