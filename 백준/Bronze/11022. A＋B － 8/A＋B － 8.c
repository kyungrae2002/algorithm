#include <stdio.h>
int main(void) {
    int n = 0;
    scanf("%d", &n);
    int avalues[400] = { 0 };
    int bvalues[400] = { 0 };
    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0;
        scanf("%d%d", &a, &b);
        avalues[i] = a;
        bvalues[i] = b;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Case #%d: %d + %d = %d\n", i+1, avalues[i], bvalues[i], avalues[i] + bvalues[i]);
    }
}