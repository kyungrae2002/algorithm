#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a*b > 0) {
        if (a > 0) printf("%d", 1);
        else if (a < 0) printf("%d", 3);
    }
    else if (a*b < 0) {
        if (a > 0) printf("%d", 4);
        else if (a < 0) printf("%d", 2);
    }
    return 0;
}