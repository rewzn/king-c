#include <stdio.h>

int main(void)
{
  float amount;

  printf("Betrag eingeben: ");
  scanf("%f", &amount);

  printf("Mit Steuer: %.2f\n", (amount / 100) * 105);

  return 0;
}
