#include <stdio.h>


int main(void)
{
    // int x;

    // printf("x: ");

    // scanf("%i", &x); // get_int()

    // printf("x: %i\n", x);



    // char *s = NULL;

    char s[4]; // eventually this will result in segmentation fault. If you don't make a check to make sure the user only put 4 bytes.

    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}