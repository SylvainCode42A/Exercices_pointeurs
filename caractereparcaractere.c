#include <unistd.h>


void ft_putchar(char c)
{ 
  write(1, &c, 1);
}
void ft_ajoutab(char *str, char *tableau)
{
  int o = 0;
  while(str[o] != '\0')
  {
    tableau[o] = str[o];
    o++;
  }
  tableau[o] = '\0';
} 
int main(void)
{
  char mot[] = "Bonjour";
  char tab[100];

  int j = 0;
  
  ft_ajoutab(mot, tab);

  while (tab[j] != '\0')
  {
    ft_putchar(tab[j]);
    j++;
  }
  ft_putchar('\n');
  return 0;
}
