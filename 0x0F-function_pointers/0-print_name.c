#include <stdio.h>

/**
 * print_name - A function that prints a name.
 * @name: The name to be printed
 * @f: Function pointer that specifies the printing method
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

/**
 * print_uppercase - Example function to print name in uppercase.
 * @name: The name to be printed in uppercase
 */
void print_uppercase(char *name)
{
    while (*name)
    {
        putchar(toupper(*name));
        name++;
    }
    putchar('\n');
}

/**
 * print_lowercase - Example function to print name in lowercase.
 * @name: The name to be printed in lowercase
 */
void print_lowercase(char *name)
{
    while (*name)
    {
        putchar(tolower(*name));
        name++;
    }
    putchar('\n');
}

int main(void)
{
    char myName[] = "John";

    printf("Printing name in uppercase: ");
    print_name(myName, print_uppercase);

    printf("Printing name in lowercase: ");
    print_name(myName, print_lowercase);

    return 0;
}

