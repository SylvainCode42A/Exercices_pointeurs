#include <unistd.h>

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
    ft_putnbr(n / 10);

  ft_putchar(n % 10 + '0');
}
void ft_putstr(char *str)
{
  int p = 0;
  while (str[p] != '\0')
  {
    ft_putchar(str[p]);
    p++;
  }
}
int ft_putstrsame(char *str2 ,char *str1)
{
  int a = 0;

  while(str2[a] == str1[a] && str2[a] != '\0' && str1[a] != '\0')
  {
    a++;
  } 
  return a;
}

int main(void)
{
  char mot1[] = "Bonjour";
  char mot2[] = "Bonsour";

  int r = ft_putstrsame(mot2, mot1);
  
  ft_putstr("La lettre ");
  ft_putnbr(r + 1);
  ft_putstr(" change");
  ft_putchar('\n');
  return 0;
}
