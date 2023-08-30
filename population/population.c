#include <cs50.h>
#include <stdio.h>

int get_start();
int get_end(int start);

int main(void)
{
    int start = get_start();
    int end = get_end(start);
    int year = 0;
    int population = start;

    if (start == end)
    {
        printf("Years: %i\n", year);
    }
    else
    {
        do
        {
            population += (population / 3 - population / 4);
            year++;
        }
        while (population < end);

        printf("Years: %i\n", year);
    }

    return 0;
}

// Get the start population.
int get_start()
{
    int start;
    do
    {
        start = get_int("Start size: ");
        if (start < 9)
        {
            printf("Please enter a value higher than 9\n");
        }
    }
    while (start < 9);
    return start;
}

// Get the end or target population.
int get_end(int start)
{
    int end;

    do
    {
        end = get_int("End size: ");
        if (end < start)
        {
            printf("Please enter a value not lower dan %i\n", start);
        }
    }
    while (end < start);
    return end;
}
