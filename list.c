#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int)); // creating a new variable to increase the array.

    if (tmp == NULL) // general check for error and quit the program.
    {
        free(list);
        return 1;
    }

    for (int i =0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;  // just manually adding the value in the new requested byte.

    free(list); // empty the previous list which is 12 bytes.

    list = tmp; // creating a new pointer for list which is now pointing to tmp

    for (int i =0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);  // Just free the allocated memory.
    return 0;
}