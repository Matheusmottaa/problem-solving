#include <stdio.h>

int main()
{
  float salary;
  scanf("%f", &salary);
  if (salary <= 400)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salary + salary * 0.15, salary * 0.15);
  else if (salary <= 800)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salary + salary * 0.12, salary * 0.12);
  else if (salary <= 1200)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salary + salary * 0.10, salary * 0.10);
  else if (salary <= 2000)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salary + salary * 0.07, salary * 0.07);
  else if (salary > 2000)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salary + salary * 0.04, salary * 0.04);
  return 0;
}