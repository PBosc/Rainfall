#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char c[68];

void m(void* param_1, int param_2, char* param_3, int param_4, int param_5) {
    time_t current_time;
    current_time = time(NULL);
    printf("%s - %d\n", c, current_time);
    return;
}

int main(int argc, char** argv) {
    int* buffer1;
    void* tmp;
    int* buffer2;

    buffer1 = (int*)malloc(8);
    *buffer1 = 1;
    tmp = malloc(8);
    buffer1[1] = tmp;

    buffer2 = (int*)malloc(8);
    *buffer2 = 2;
    tmp = malloc(8);
    buffer2[1] = tmp;

    strcpy((char*)(buffer1[1]), argv[1]);
    strcpy((char*)(buffer2[1]), argv[2]);

    FILE* file = fopen("/home/user/level8/.pass", "r");
    fgets(c, 66, file);
    fclose(file);
    puts("~~");

    return 0;
}
