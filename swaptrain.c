#include <stdio.h>

#define salam printf

void swap(int *nombreA, int *nombreB)
{
  int temporaire = *nombreA;
  *nombreA = *nombreB;
  *nombreB = temporaire;



}





int main(void)
{
  int  nombreA = 13;
  int nombreB = 31;


  salam("Le nombre A est %d et le nombre B est %d\n", nombreA, nombreB);

  swap(&nombreA, &nombreB);

  salam("Le nombre A est %d et le nombre B est %d\n", nombreA, nombreB);

  return 0;
}



