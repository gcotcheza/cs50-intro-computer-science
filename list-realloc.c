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

    int *tmp = realloc(list, 4 * sizeof(int)); // creating a new variable to increase the array, not directly the reallocating the variable list to avoid memory leak/loss.
    // memory can happen if i get an error after the


    if (tmp == NULL) // general check for error and quit the program.
    {
        free(list);
        return 1;
    }

    list = tmp;

    list[3] = 4;  // just manually adding the value in the additional requested memory in list.


    for (int i =0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);  // Just free the allocated memory.
    return 0;
}
