#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{
    // Repetition of variables, lesson for array:
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // Using arrays.
    // int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;

    // Score from users input.
    // int scores[3];
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");

    // Using loop
        int scores[N];

        for (int i = 0; i<N; i++)
       {
            scores[i] = get_int("Score: ");
        }
        printf("Average: %f\n", average(N, scores));

    // This will give a whole integer output of 59
    // printf("average: %i\n", (score1 + score2 + score3) /3);

    // With type casting, it will give a 59.333332 answer which is close to the correct answer
    // printf("average: %f\n", (score1 + score2 + score3) /(float)3);

    // Using the array example.
    // printf("average: %f\n", (scores[0] + scores[1] + scores[2]) /(float)3);

}

float average(int length, int array[])
{
    // return (array[0] + array[1] + array[2] / 3.0 );

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // sum = sum + array[i];
        // += means add and update the current sum!
        sum += array[i];
    }
    return sum/(float) length;
}
