#include <stdio.h>

/* copy input to output; second version */
int main(){
	int c;

	c = (getchar() != EOF);
	printf("%d\n", c);

	return 0;
}
