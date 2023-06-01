#include <stdio.h>
#include <subtractor.h>

#define BUFFSIZE 20

int main()
{
    char answer[BUFFSIZE] = "";
    subtractor(10, 11, answer, BUFFSIZE);

    if(!answer)
    {
        fprintf(stderr, "Unable to access location of answer\n");
        return 1;
    }
    printf("%s\n", answer);
    return 0;
}
