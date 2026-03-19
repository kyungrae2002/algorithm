#include <stdio.h>

int main(void) {
    int score;
    scanf("%d", &score);
    if (score < 60 || score > 100)
        putchar('F');
    else if (score > 89 )
        putchar('A');
    else if (score > 79)
        putchar('B');
    else if (score > 69)
        putchar('C');
    else
        putchar('D');
}