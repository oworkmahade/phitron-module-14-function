
// return + parameter

#include <stdio.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int sub(int a, int b)
{
    int result = a - b;
    return result;
}

int main()
{
    int result_sum = sum(100, 200);
    int result_sub = sub(200, 100);
    printf("%d\n", result_sum);
    printf("%d", result_sub);
    return 0;
}
