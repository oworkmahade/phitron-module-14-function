#include <stdio.h>

void distinctNumbers(int n, int arr[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    printf("%d", count);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    distinctNumbers(n, arr);
    return 0;
}