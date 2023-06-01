#include <stdio.h>
#include <subtractor.h>

void subtractor(int x, int y, char *result, size_t buffer_length)
{
    int calculation = x - y;
    if (calculation < 0)
    {
        snprintf(result, buffer_length, "%s", "NEGATIVE");
    }
    else
    {
        snprintf(result, buffer_length, "%s", "POSITIVE");
    }
}