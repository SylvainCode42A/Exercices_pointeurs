#include <stdio.h>

int main(void)
{
  int nombre = 0;

  printf ("Choisi un nombre a 3 chiffres\n");
  scanf ("%d", &nombre);

  int resultat = nombre % 100 / 10;

  printf ("Le chiffre des dizaine est %d\n", resultat);

  return 0;
}
