#include <stdio.h>

#define N 6

void affichage(int *p, int size);

int main(void)
{

  int tab[N] = {1, 2, 3, 4, 5, 6};
  
  int *p = tab;
  
  affichage(p, N);

  return 0;
}

void affichage(int *p, int size)
{
  while (0 < size)
  {
    printf("[%d] ", *p);
    p++;
    size--;
  }
}
