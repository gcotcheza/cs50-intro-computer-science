#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(void)
{
    // char *s = get_string("s: ");

    // char *t = s; // It will copy only the address/pointer of the char *s to *t resulting in having two pointers for de char *s or string s

    // if (strlen(t) > 0) // check if the umake ser entered a string
    // {
    //     t[0] = toupper(t[0]); //
    // }

    // printf("s: %s\n", s); // Hi!
    // printf("t: %s\n", t); // Hi!


    // this will appropriately copy one by one characters of s to t
    // char *s = get_string("s: ");

    // char *t = malloc(strlen(s) + 1 );  // memory-allocation that receives a parameter of the length of the memory i want, +1 for the \0 to indicate the end of a string.

    // for (int i = 0; i < (strlen(s) + 1); i++)
    // {
    //     t[i] = s[i];
    // }

    // if (strlen(t) > 0)
    // {
    //     t[0] = toupper(t[0]);
    // }

    // printf("s: %s\n", s);
    // printf("t: %s\n", t);


    // char *s = get_string("s: ");

    // char *t = malloc(strlen(s) + 1 );

    // for (int i = 0; n = strlen(s) + 1; i <n;  i++) // small optimization to avoid calling the function strlen() every time i go throught the loop.
    // {
    //     t[i] = s[i];
    // }

    // if (strlen(t) > 0)
    // {
    //     t[0] = toupper(t[0]);
    // }

    // printf("s: %s\n", s);
    // printf("t: %s\n", t);


    // Using the strcpy()
    char *s = get_string("s: ");

    if (s == NULL) {  // check if get_string gives an error.
        return 1;
    }

    char *t = malloc(strlen(s) + 1 );

    if (t == NULL) {
        return 1;     // check if malloc gives an error.
    }

    strcpy(t, s); // string copy

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // always free the memory in C to make the memory available to be use.

    return 0;
}