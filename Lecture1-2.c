#include <stdio.h>
int main() {
	int start = 1;
	for (int i=0; i<12; i++)
		printf("\n %d %d", i, start*=100);
		
	long int lstart = 1;
	for (int i=0; i<12; i++)
		printf("\n %d %ld", i, lstart*=100);
		
	long long int llstart=1;
	for (int i=0; i<12; i++)
		printf("\n  %d %lld", i, llstart*=100);
	printf("\n");
	}
	
