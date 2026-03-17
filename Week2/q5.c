#include <stdio.h>

int main(void) {
    char c_arr[10] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = c_arr;

    printf("Value at start_ptr: %c\n", *ptr);
    printf("Value at next position: %c\n", *(ptr + 1));

    return 0;
}