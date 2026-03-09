#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter number: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Program end\n");
            break;
        }

        for (int i = 0; i < num; i++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}