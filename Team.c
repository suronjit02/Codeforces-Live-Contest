#include <stdio.h>     
int main()
{
    int n, a, b, c;

    scanf("%d", &n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        if ((a + b + c) > 1)
            count++;
    }

    printf("%d\n", count);

    return 0;
}