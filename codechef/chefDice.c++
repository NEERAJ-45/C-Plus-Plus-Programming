#include <stdio.h>

int main(void)
{
    int test;
    int n;
    int result;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            result = (n / 2) + n * 6;
        }
        else
        {
            result = (n / 2) + 2 * ((n / 2) * 6) + 6;
        }
        printf("%d\n", result);
    }
    return 0;
}
