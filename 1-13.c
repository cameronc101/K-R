#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, nc, state;
	int wchist[28];

	nc = 0;
	for(int k=0; k<28; ++k)
		wchist[k] = 0;

	state = OUT;
	while((c= getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			++wchist[nc];
			nc = 0;
		}else
			++nc;

	}
	printf("wc    5    10   15   20   25   30\n");
	for(int i=1; i<28; ++i){
		printf("%2d", i);
		for(int j=0; j<wchist[i]; ++j){
			printf("█");
		}
		printf("\n");
	}
	return 0;
}
