#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    int result = sum();
    printf("%d", result);
    return 0;
}