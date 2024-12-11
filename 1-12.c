#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* print each word of input to a new line */
int main(){
	int c, ns, state;
	
	ns = 0;
	state = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			++ns;
			if(ns == 1)
				putchar('\n');
			else if (ns > 1)
				;
		}else{
			ns = 0;
			state = IN;
			putchar(c);
		}
	}
	return 0;
}
