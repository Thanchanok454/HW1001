#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int loop = 9;
	int l = 1;
	int r = 0;
	int sloop = 1;
	for (l = 1; r = sloop; l++) {
		sloop = loop - l;
		for (r = 0; r <= sloop; r++) {
			printf(" ");
		}
		for (r = 1; r <= loop - sloop; r++) {
			printf("%d", r);
		}
		for (r = loop - sloop - 1; r >= 1; r--) {
			printf("%d", r);
		}
		printf("\n");
	}
	return 0;
}