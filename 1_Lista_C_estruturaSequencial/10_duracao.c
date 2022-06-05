#include<stdio.h>

int main() {
	int seg, hr, min, s;
	printf("Digite a duracao em segundos: ");
	scanf("%i", &seg);

	hr = seg/3600;
	
	min = (seg/60)-(hr*60);
	
	s = seg-((min*60)+(hr*3600));
	
	printf("%i:%i:%i",hr,min,s);
	
	return 0;
}