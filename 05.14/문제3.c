#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    short x, y;
    while(1) {
        x = rand() % 50 + 11, y = rand() % 20 + 4;
        system("clear");
        printf("\033[%d;%dH", y, x);
        printf("Hello, World!\n");
        sleep(1);
    }
}
