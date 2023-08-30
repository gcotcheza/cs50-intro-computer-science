#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);


    // swap(x, y);

    // & is needed to indicate to swap the addresses/pointers
    swap(&x, &y);

    printf("x is %i, y is %i\n", x, y);
}
// This will not swap the values because the values stays in swap function and it doesn't go to main function.
// void swap(int a, int b)
// {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }


void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}