#include <stdio.h>

int main()
{
    int l, c, m;
    scanf("%d%d", &l, &c);

    if((l + c) %2 == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }


    return 0;
}