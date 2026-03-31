#include <stdio.h>

int main(int argc, char** argv) {
    unsigned char x = 0b1010;
    unsigned int result = (x >> 3) & 0b1111;
    printf("the left most bit is %u\n", result);
    return 0;
}