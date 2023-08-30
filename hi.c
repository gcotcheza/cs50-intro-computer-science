#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // string s = "HI!";
    // string t = "BYE!";

    // //Printing the ascii value of the string.
    // printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

    // printf("%s\n", s);

    // printf("%s\n", t);

    // Let's put the strings in an array which results in nested array.
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    // Example that shows how to access the value of each string inside an array.
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}