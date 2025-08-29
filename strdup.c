#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c) {write(1, &c, 1);}

void ft_putstr(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    ft_putchar(str[i]);
    i++;
  }
}
char ft_copiechar(char *dest, char *str)
{
  int a = 0;
  while (str[a] != '\0')
  {
    dest[a] = str[a];
    a++;
  }
  return *dest;
}
int ft_strlen(char *str)
{
  int o = 0;
  while (str[o] != '\0')
    o++;
  return o;
}

int main(void)
{
  char mot[] = "Bonjour";
  int taille = ft_strlen(mot);
  
  char *copie = malloc((taille + 1) * sizeof(int));
  
  ft_copiechar(copie, mot);
  ft_putstr(copie);
  ft_putchar('\n');
  free(copie);
  return 0;
}
