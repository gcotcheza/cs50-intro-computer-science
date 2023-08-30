#include <stdio.h>
// #include <cs50.h>


int main(void)
{
    // int n = 50;

    // printf("%i\n", n); // this will just print 50

    // printf("%p\n", &n); // prints the address of n, result will be like this: 0x7fff319aa00c // n will be 4 bytes because int is 4 bytes

    // assign the address of n to variable p
    // int *p = &n; // pointer p = &n; // pointers will take 8 bytes // accessing p, i can get the address of n, that's the idea of pointer

    // printf("%p\n", &p); // gives 0x7ffd01e5cde0 it's the value of p

    // printf("%i\n", *p);




    // string s = "HI!"; // string are actually just an address/pointer of the first character of a sequence of characters untill \0 which is the end of any string.
    char *s = "HI!";

    // printf("%s\n", s);

    // printf("%p\n", s); // prints the address 0x55f9b6526004 because of p is a pointer
    // printf("%s\n", s); // prints the value of s which is HI!
    // printf("%p\n", &s[0]); // accessing the memory where the first character of string is stored, address is the same as %p.
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]);
    // printf("%p\n", &s[4]);

    // printf("%c\n", s[0]); H
    // printf("%c\n", s[1]); I
    // printf("%c\n", s[2]); !

    // Pointer arithmetic
    // printf("%c\n", *s);      // H
    // printf("%c\n", *(s+1));  // I
    // printf("%c\n", *(s+2));  // !
    // printf("%x\n", *(s+500000)); // Segmentation fault (core dumped) accessing outside the alocated memory.

    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    printf("%s\n", s+3);

}