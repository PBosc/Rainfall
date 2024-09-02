#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    char   buffer[10];

    read(0, buffer, 10);

    buffer[9] = 0;

    printf("%s\n", buffer);

    read(0, buffer, 10);

    printf(buffer);


    return 0;
}
