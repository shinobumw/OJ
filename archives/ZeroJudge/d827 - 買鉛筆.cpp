#include <stdio.h>
int main() 
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%d\n", n / 12 * 50 + n % 12 * 5);
    }
    return 0;
}