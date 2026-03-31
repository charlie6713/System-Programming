#include <stdio.h>
#include <assert.h>

#define SIZE 7
#define FILENAME "temp.dat"

void print_doubles(double *A, int n);

int
main(int argc, char *argv[]) {
    double A[SIZE];
    FILE *fp;
    int i;

    /* initialize the array with some values */
    for (i = 0; i < SIZE; i++) {
        A[i] = 1.2345 * i + 0.6789;
    }

    print_doubles(A, SIZE);

    /* open the file for writing */
    fp = fopen(FILENAME, "w");
    assert(fp != NULL);

    /* write the whole array in one operation */
    i = fwrite(A, sizeof(*A), SIZE, fp);
    assert(i == SIZE);

    /* clear the array */
    for (i = 0; i < SIZE; i++) {
        A[i] = 0.0;
    }

    print_doubles(A, SIZE);

    /* open the file for reading */
    fp = freopen(FILENAME, "r", fp);
    assert(fp != NULL);

    /* read the whole array in one operation */
    i = fread(A, sizeof(*A), SIZE, fp);
    assert(i == SIZE);

    print_doubles(A, SIZE);

    fclose(fp);

    return 0;
}

void
print_doubles(double *A, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%7.3f", A[i]);
    }

    printf("\n");
}