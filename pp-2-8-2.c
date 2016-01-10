#include <stdio.h>

int main(void)
{
  float radius;

  printf("Radius eingeben: ");
  scanf("%f", &radius);
  
  printf("v = %f\n", (4.0f/3.0f) * 3.141592f * (radius * radius * radius));


  return 0;
}
