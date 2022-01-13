#include <stdio.h>

int main()
{
  int begin, end, x;
  scanf("%d%d", &begin, &end);

  if (end - begin == 0)
    x = 24;
  else if (begin < 24 && begin > end)
    x = (24 - begin) + end;
  else
    x = end - begin;
  printf("O JOGO DUROU %d HORA(S)\n", x);

  return 0;
}
