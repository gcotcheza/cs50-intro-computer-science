#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    if(x == NULL)
    {
        return 1;
    }
    x[0] = 72;  // Invalid write of size 4, this was because my previous array started with x[1], so this means segmentation fault.
    x[1] = 73;
    x[2] = 33;

    free(x); // 12 bytes in 1 blocks are definitely lost in loss record 1 of 1. Same as memory leak error. This error comes when this line is missing
    return 0;
}