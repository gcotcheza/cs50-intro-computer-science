#include <stdio.h>
#include <cs50.h>
#include <string.h>


// Defining a new data structure named person
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // person can now be used as data type
    person people[2];

    people[0].name = "John";
    people[0].number = "+31-639-509-308";

    people[1].name = "David";
    people[1].number = "+31-639-509-456";

    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found: %s -> %s\n", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}