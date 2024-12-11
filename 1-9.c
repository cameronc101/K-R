#include <stdio.h>

int main(){
	int c, sp;
	sp = 0;
	while((c = getchar()) != EOF){
		if(c == ' ')
			sp++;
		else
			sp = 0;

		if(c == ' ' && sp > 1)
			;
		else
			putchar(c);

	}
	return 0;
}
