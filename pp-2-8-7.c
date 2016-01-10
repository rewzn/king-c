#include <stdio.h>

int main(void)
{
  int amount, schein_zwanzig, schein_zehn, schein_fuenf, schein_eins;

  printf("Betrag eingeben: ");
  scanf("%d", &amount);

  schein_zwanzig = amount / 20;
  amount -= schein_zwanzig;

  schein_zehn = amount / 10;
  amount -= schein_zehn;
  
  schein_fuenf = amount / 5;
  amount -= schein_fuenf;
  
  schein_eins = amount / 1;
  amount -= schein_eins;

  printf("20 EUR Scheine: %d\n", schein_zwanzig);
  printf("10 EUR Scheine: %d\n", schein_zehn);
  printf("5 EUR Scheine: %d\n", schein_fuenf);
  printf("1 EUR Scheine: %d\n", schein_eins);

  return 0;
}
        
