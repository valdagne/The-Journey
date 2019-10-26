#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

string triangle(float x, float y, float z);

int main(void)
{
    int sides[3];
    sides[0] = get_float("A: ");
    sides[1] = get_float("B: ");
    sides[2] = get_float("C: ");
    if ((sides[0] <= 0) || (sides[1] <= 0) || (sides[2] <=0))
    {
        printf("Invalid.\n");
        return 1;
    }
    
    
    string answer = triangle(sides[0], sides[1], sides[2]);
    printf("%s", answer);
}

string triangle(float x, float y, float z)
{
    string f = ("Not a triangle.\n");
    string t = ("Confirmed to be a triangle.\n");
    if (((x + y) < z) || ((x + z) < y) || ((y + z) < x))
    {
        return f;
    }
    else
    {
        return t;
    }            
}
