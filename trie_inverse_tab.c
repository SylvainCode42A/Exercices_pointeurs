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

void trier(int *p, int size)
{
  int i = 0;
  int a = 0;

  while (a < size)
  {
    i = 0;
    while (i < size - 1 - a)
    {
      if (*(p + i) > *(p + i + 1))
      {
        int temp = *(p + i + 1);
        *(p + i + 1) = *(p + i);
        *(p + i) = temp;
      }
      i++;
    }    
    a++;
  }
}

void inverser(int *p, int size)
{
  int j = 0;  

  while (j < size / 2)
  {
    int temp = *(p + j);
    *(p + j) = *(p + size - 1 - j);
    *(p + size - 1 - j) = temp;

    j++; 
  }
}

int main(void)
{
  int tableau[N] = {5, 3, 1, 4, 2};
  int *p = tableau;
  
  trier(p, N);
  int i = 0;
  while (i < N)
  {
    ft_putnbr(tableau[i]);
    ft_putchar(' ');
    i++;
  } 
  ft_putchar('\n');
  
  inverser(p, N);
  i = 0;
  while (i < N)
  {
    ft_putnbr(tableau[i]);
    ft_putchar(' ');
    i++;
  }
  ft_putchar('\n');

  return 0;
}
