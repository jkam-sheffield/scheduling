#include <stdio.h> // printf

int main()
{
    int count = 0;
    for (int i = 0; i < 100000000; i++)
    {
        count += 3;
    }

    printf("...bye\n");
    return 0;
}
