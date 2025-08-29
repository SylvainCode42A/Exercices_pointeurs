#include <unistd.h>
#define N 5

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int n)
{
  if (n < 0)
  {
    write(1, "-", 1);
    n = -n;
  }

  if (n >= 10)
  {
    ft_putnbr(n / 10);
  }
  ft_putchar(n % 10 + '0');
}

void ft_puttab(int *p, int size)
{
  int i = 0;
  while (i < size)
  {
    ft_putnbr(*(p + i));
    ft_putchar(' ');
    i++;
  }
  ft_putchar('\n');
}  

int main(void)
{
  int tab[N] = {1, 2, 3, 4, 5};
  int *p = tab;

  ft_puttab(p, N);

  return 0;
}
