#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Saves names and numbers to a CSV file
int main(void)
{
    FILE *file = fopen("phonebook.csv", "a"); // "a" means append mode, it will allow to add more stuff

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}