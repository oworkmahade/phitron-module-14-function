#include <stdio.h>

void evenOdd()
{

    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    evenOdd();
    return 0;
}
