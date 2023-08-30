
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Before: ");
        printf("After: ");

        //for (int i = 0; i < strlen(s); i++) // This will call strlen all the time,
        int n = strlen(s); // The line above this code can be fixed detereminng the lenght before it even enteres the loop.
        for (int i = 0; i < n; i++)
        {
            printf("%c", toupper(s[i]));

        }
        printf("\n");
}