#include <stdio.h>

int main(){
	int c;
	int chist[26];

	for(int k=0; k<26; ++k)
		chist[k] = 0;

	while((c = getchar()) != EOF){
		if(c >= 65 && c <= 90)
			chist[c-65]++;
		else if(c >= 97 && c <= 122)
			chist[c-97]++;
		else ;

	}
	printf("cc    5    10   15   20   25   30   35   40   45   50\n");
	for(int i=0; i<26; ++i){
		printf("%c ", i+65);
		for(int j=0; j<chist[i]; ++j){
			printf("█");
		}
		printf("\n");
	}
	return 0;
}
