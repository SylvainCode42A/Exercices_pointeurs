#include <stdio.h>
#define N 5

void inverse(int *p, int size);

int main(void)
{
  int tab[N] = {1, 2, 3, 4, 5};
  int *p = tab;

  inverse(p, N);

  int i = N;

  while (i > 0)
  {
    printf("[%d] ", *p);
    p++;
    i--;
  }

  return 0;
}


void inverse(int *p, int size)
{
  int temp = 0;
  int i = 0;

  while (i < size / 2) 
  {
    temp = *(p + i);
    *(p + i) = *(p + size - 1 - i);
    *(p + size - 1 - i) = temp;
   
    i++; 
  }
}
