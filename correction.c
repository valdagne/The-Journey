#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("What string would you like to format?\n");
    for (int i = 0, j = strlen(s); i < j; i++)
    {
        if ((i == 0) && ((i[s] >= 'a') && (i[s] <= 'z')))
        {
            printf("%c", i[s] - ('a' - 'A'));
        }
        else if (i[s] == ' ')
        {
            printf(" ");
        }
        else if ((i != 0) && (i[s] < 'a') && (i[s] >= 'A'))
        {
            printf("%c", i[s] + ('a' - 'A'));
        }
        else if (i == (j - 1) && (i[s] == '.'))
        {
            continue;
        }
        else
        {
            printf("%c", i[s]);
        }
    }
    printf(".");
    printf("\n\nYou're welcome.\n");
}

