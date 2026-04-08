#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    if (argc != 2){
        printf("you shoud only type 2 argument\n");
        return 1;
    }
    int length = atoi(argv[1]);
    srand(time(NULL));
    for(int i = 0; i < length; i ++){
        int r = rand() % 94 + 33;
        printf("%c", r);
    }
    printf("\n");
    return 0;
}