#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    printf("%lu\n", (size_t) (atoi(av[1]) * 4));
}