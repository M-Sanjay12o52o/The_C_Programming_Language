#include <stdio.h>

// program to count blanks, tabs and newlines

int main()
{
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++newlines;
        else if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++blanks;
    }

    printf("newlines: %i\n", newlines);
    printf("tabs: %i\n", tabs);
    printf("blanks: %i\n", blanks);
}