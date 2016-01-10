#include <stdio.h>

int main(void) 
{
	i = 20;
	j = 20;
	x = 43.2892f;
	y = 5527.0f;
	
	/* correct */
	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
	
	/* wrong */
	printf("%d %d\n", i);
	
	/* wrong */
	printf("%d\n", i, j);
	
	/* wrong */
	printf("%f %d\n", i, x);
	
	return 0;
}
