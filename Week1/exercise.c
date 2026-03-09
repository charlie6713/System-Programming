#include <stdio.h>

int main(){
    int num;
    int i;
    printf("Enter Number: ");
    while(scanf("%d", &num) == 1){
        printf("\n");
        printf("%d | ", num);
        for(i = 0; i<num; i++){
            printf("*");
        }
    }
    return 0;
}