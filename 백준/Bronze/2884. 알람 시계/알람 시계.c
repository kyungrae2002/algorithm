#include <stdio.h>

int main(void) {
	int H, M;
	scanf("%d %d", &H, &M);
	int total = 60*H + M;
	if (total < 45) {
		H = 23;
		M = total + 15;
	}
	else {
		total -= 45;
		H = (int)total / 60;
		M = total % 60;
	}
	printf("%d %d", H, M);
}