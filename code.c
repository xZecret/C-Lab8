#include <stdio.h>

#define N1 4
#define N2 4

void get_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        *(arr + i) = i;
}

void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", *(arr + i));
    putchar('\n');
}

void print_arr_second(int *arr, int len1, int len2, int n)
{
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            printf("%d ", *((arr + i * len2) + j));
            if (i * len2 + j >= n)
                return;
        }
        putchar('\n');
    }
}

int main()
{
    int array[N1][N2];
    get_arr((int *)array, N1 * N2);
    print_arr((int *)array, N1 * N2);
    putchar('\n');
    print_arr_second((int *)array, N1, N2, 8);
}