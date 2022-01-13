#include <stdio.h>

int main()
{
  float salary, x = 0;
  scanf("%f", &salary);
  if (salary <= 2000)
    printf("Isento\n");
  else
  {
    if (salary > 4500)
    {
      x += (salary - 4500) * 0.28;
      salary = salary - (salary - 4500);
    }
    if (salary > 3000)
    {
      x += (salary - 3000) * 0.18;
      salary = salary - (salary - 3000);
    }
    if (salary > 2000)
    {
      x += (salary - 2000) * 0.08;
      salary = salary - (salary - 2000);
    }
    printf("R$ %.2f\n", x);
  }
  return 0;
}