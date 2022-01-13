#include <stdio.h>

int main()
{
  int dayIni, hourIni, minIni, secIni;
  int dayEnd, hourEnd, minEnd, secEnd;
  scanf("Dia %d", &dayIni);
  scanf("%d: %d :%d\n", &hourIni, &minIni, &secIni);
  scanf("Dia%d", &dayEnd);
  scanf("%d:%d:%d", &hourEnd, &minEnd, &secEnd);
  return 0;
}