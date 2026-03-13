#include <stdio.h>

void strcopy(char *dec, char *start){
    int i = 0;
    while(start[i]){
        dec[i] = start[i]; //or it is similar to *(dec +i) = *(start +i)
        i++;
    }
    dec[i] = '\0';
}

void strcopy2(char *dec, char *start){
    while(*start){
        *dec = *start;
        start++;
        dec++;
    }
    *dec = '\0';
}
int main(){
    char name[] = "charlie";
    char name2[10];
    char name3[] = "jack";
    strcopy(name2, name);
    printf("%s\n", name2);
    strcopy2(name2, name3);
    printf("%s\n", name2);
    return 0;
}