#include <stdio.h>
#include <math.h>

int main()
{
    int floor_val = floor(4.8);
    int ceil_val = ceil(4.8);
    int round_val = round(4.5);
    int sqrt_val = sqrt(16);
    int pow_val = pow(2, 3);
    int abs_val = abs(-10);
    printf("ceil of 4.8 ->%d\n", ceil_val);
    printf("floor of 4.8 ->%d\n", floor_val);
    printf("round of 4.5 ->%d\n", round_val);
    printf("sqrt of 16 ->%d\n", sqrt_val);
    printf("pow of 2^3 ->%d\n", pow_val);
    printf("abs of 10 ->%d\n", abs_val);

    return 0;
}