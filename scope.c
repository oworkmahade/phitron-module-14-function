#include <stdio.h>

int x = 10, y = 20; // global variable

int func1()
{
    int result = x + y;
    printf("func1 ->%d\n", result);
}

int func2()
{
    int result = y - x;
    printf("func2 ->%d\n", result);
}

int main()
{

    int i = 20;
    for (int i = 0; i < 10; i++)
        printf("%d\n", i);

    printf("%d\n", i);

    func1();
    func2();
    int result = x * y;
    printf("main ->%d\n", result);
    return 0;
}