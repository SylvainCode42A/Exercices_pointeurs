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
int comptage(char *str)
{
  int i = 0;
  while(str[i] != '\0')
  {
    i++;
  } 
  return i;
}

int main(void)
{
  char mot[] = "Bonjour";
  
  int r = comptage(mot);    
  ft_putnbr(r);
  ft_putchar('\n');
  
  return 0; 
}
