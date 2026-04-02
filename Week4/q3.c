#include <stdio.h>
#include <string.h>

#define BUFLEN (64)

int main(int argc, char **argv) {
    int len;
    char buf[BUFLEN];

    while (fgets(buf, BUFLEN, stdin) != NULL) {
        len = strlen(buf);
        printf("%d\n", len);
    }

    return 0;
}