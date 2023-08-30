#include <cs50.h>
#include <stdio.h>

int get_value(const char *prompt, int min_value);

int main(void)
{
    int start = get_value("Start size (must be at least 9): ", 9);
    int end = get_value("End size (must be greater than or equal to start size): ", start);
    int years = 0;

    while (start < end)
    {
        start += start / 3 - start / 4;
        years++;
    }

    printf("Years: %i\n", years);
    return 0;
}

int get_value(const char *prompt, int min_value)
{
    int value;

    do
    {
        printf("%s", prompt);
        value = get_int("");
        if (value < min_value)
        {
            printf("Please enter a value higher than %i\n", min_value - 1);
        }
    }
    while (value < min_value);

    return value;
}
