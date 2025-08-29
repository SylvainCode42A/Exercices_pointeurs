#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
void ft_strcpy(char *dest, char *str)
{
  int i = 0;
  
  while(str[i] != '\0')
  {
    dest[i] = str[i];
    i++;
  }
  dest[i] = '\0';
}
int main(void)
{
  char buffer[100];
  char mot[] = "Bonjourirejn";

  ft_strcpy(buffer, mot);
  
  int a = 0;
  while(buffer[a] != '\0')
  {
    ft_putchar(buffer[a]);
    a++;
  }
  ft_putchar('\n');
  return 0;
}
