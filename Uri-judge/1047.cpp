#include <stdio.h>

int main()
{
  int beginH, beginM, endH, endM, h, m;
  scanf("%d%d%d%d", &beginH, &beginM, &endH, &endM);

  if (endH >= beginH)
    h = endH - beginH;
  if (beginH > endH)
    h = (endH - beginH) + 24;
  if (h == 0)
    h = 24;
  if (endM >= beginM)
    m = endM - beginM;
  if (beginM > endM)
  {
    m = (endM - beginM) + 60;
    h--;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
  return 0;
}

void otherSolution()
{
  int a, b, c, d;
  int dif;
  scanf("%d %d %d %d", &a, &c, &b, &d);
  dif = ((b * 60) + d) - ((a * 60) + c);
  if (dif <= 0)
    dif += 24 * 60;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif / 60, dif % 60);
}