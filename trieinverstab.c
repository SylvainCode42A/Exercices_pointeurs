#include <stdio.h>

#define N 5

void trie(int *p, int size);

void inverser(int *p, int size);

int main(void)
{
  int tab[N] = {2, 4, 3, 1, 5};
  int *p = tab;
  int i = 0;  

  while (i < N)
  {
    printf("[%d] ", *(p + i));
    i++;
  }
  
  p = tab;
  i = 0;
  trie(p, N);
  
  printf("\n\n");

  while (i < N)
  {
    printf("[%d] ", *(p + i));
    i++;
  }

  p = tab;
  i = 0;
  inverser(p,N);

  printf("\n\n");

  while (i < N)
  {
    printf("[%d] ", *(p + i));
    i++;
  }
}

void trie(int *p, int size)
{
  int o = 0;
  int j = 0;

  while (o < size)
  {
    j = 0;
    while (j < size - 1)
    {
      if (*(p + j + 1) <  *(p + j))
      {
        int temp = *(p + j + 1);
        *(p + j + 1) = *(p + j);
        *(p + j) = temp;
      }
      else
      {
      }

      j++;
    }
    o++;
  }
}

void inverser(int *p, int size)
{
  int a = 0;

  while (a < size / 2)
  {
    int temp = *(p + a);
    *(p + a) = *(p + size - 1 - a);
    *(p + size - 1 - a) = temp;

    
    a++;
  }
}
