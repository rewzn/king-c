#include <stdio.h>

#define ADDER 5
#define DOTHIS "-"

int main(void)
{
  int eingabe;

  printf("Zahl eingeben: ");
  scanf("%d", &eingabe);
  printf("Zahl %s %d = %d\n", DOTHIS, ADDER, eingabe DOTHIS ADDER);

  return 0;
}
