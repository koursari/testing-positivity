#include <stdio.h>
#include <subtractor.h>

#define BUFFSIZE 20

int main()
{
    char answer[BUFFSIZE] = "";
    subtractor(10, 11, answer, BUFFSIZE);

    printf("%s\n", answer);
    return 0;
}
