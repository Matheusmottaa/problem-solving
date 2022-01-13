#include <stdio.h>

int main()
{
  int n;
  int i;
  float note1, note2, note3, avarage;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%f%f%f", &note1, &note2, &note3);
    avarage = (note1 * 2.0 + note2 * 3.0 + note3 * 5.0) / 10.0;
    printf("%.1f\n", avarage);
  }
  return 0;
}