#include <cs50.h>
#include <stdio.h>

int get_height();
void print(int height);

int main(void)
{
    int height = get_height();
    print(height);
}

int get_height()
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}

void print(int height)
{
    int n = 0;
    do
    {
        for (int j = 1; j < height; j++)
        {
            printf(" ");
        }

        for (int i = 0; i < n + 1; i++)
        {
            printf("#");
        }

        printf("  ");
        for (int i = 0; i < n + 1; i++)
        {
            printf("#");
        }
        printf("\n");
        height = height - 1;
        n++;
    }
    while (height > 0);
}
