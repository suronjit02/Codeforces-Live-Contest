#include <stdio.h>

int main()
{
    int lage, n, cow, chiken;

    scanf("%d", &n);

    int i = 0;
    do
    {
        scanf("%d", &lage);

        if (lage % 4 == 0)
        {
            printf("%d\n", lage / 4);
        }
        else if (lage % 4 == 2)
        {
            int animal = ((lage - 2) / 4) + 1;
            printf("%d\n", animal);
        }
        else
        {
            printf("%d\n", lage / 2);
        }

        i++;

    } while (i < n);

    return 0;
}
