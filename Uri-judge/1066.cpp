#include <stdio.h>

int main()
{
  int numbers, odd = 0, even = 0, positive = 0, negative = 0, i = 0;
  for (i; i < 5; i++)
  {
    scanf("%d", &numbers);
    if (numbers % 2 == 0)
      even++;
    else
      odd++;
    if (numbers > 0)
      positive++;
    else if (numbers < 0)
      negative++;
  }
  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
  return 0;
}