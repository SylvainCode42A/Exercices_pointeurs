#include <stdio.h>

#define N 5

void trie(int *p, int size);

int main(void)
{
  int tab [N] = {3, 2, 5, 1, 4};

  int *p = tab;
  int a = 0;

  trie(p, N);

  while (a < N)
  {
    printf("[%d] ", *p);
    p++;
    a++;
  }

  return 0;
}

void trie(int *p, int size)
{
  int i = 0;
  int j = 0;

  while (i < size)
  {
    j = 0;
    while (j < size - 1)
    {
      if (*(p + j) > *(p + j + 1))
      {
       
        int temp = *(p + j);
        *(p + j) = *(p + j + 1);
        *(p + j + 1) = temp;  
      }
      else 
      {
         
      }
      j++;
    }
    i++;
  } 
}
