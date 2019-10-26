#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int usleep(__useconds_t);

int main(void)
{
    char alphabet[26];
        for (int x = 0; x < 26; x++)
        {
            alphabet[x] = 'A' + x;
            printf("%c\n", alphabet[x]);
            usleep (250000);
            if (x == 25)
            {
                x -= 26;
            }
        }
        return 0;
}




