#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	int total = 60 * A + B;
	total += C;
	total = total % 1440;
	A = (int)total / 60;
	B = total % 60;
	printf("%d %d\n", A, B);
	return 0;
}