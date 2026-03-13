#include <stdio.h>

int strlength(char *string){
    int len = 0;
    while(*string){
        string++;
        len++;
    }
    return len;
}


int main(){
    char name[] = "charlie";
    int len;
    len = strlength(name);
    printf("%d\n", len);
    return 0;
}