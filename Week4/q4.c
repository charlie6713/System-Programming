#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Usage: %s input output old new\n", argv[0]);
        return 1;
    }

    FILE *in = fopen(argv[1], "r");
    FILE *out = fopen(argv[2], "w");

    if (!in || !out) {
        printf("File error\n");
        return 1;
    }

    char line[MAX];

    while (fgets(line, MAX, in)) {
        char *pos = line;

        while ((pos = strstr(pos, argv[3])) != NULL) {
            char buffer[MAX];

            int index = pos - line;
            line[index] = '\0';

            snprintf(buffer, MAX, "%s%s%s",
                     line,
                     argv[4],
                     pos + strlen(argv[3]));

            strcpy(line, buffer);
            pos = line + index + strlen(argv[4]);
        }

        fputs(line, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}