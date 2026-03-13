#include <stdio.h>

int stringcompare(char *S1, char *S2){
    while(*S1 && *S2){
        if(*S1 < *S2){
            return -1;
        }
        else if(*S1 > *S2){
            return 1;
        }
        S1++;
        S2++;
    }
    if(*S1 < *S2) return -1;
    if(*S1 > *S2) return 1;
    return 0;
}


int main(){
    char S1[] = "abc";
    char S2[] = "abcd";
    int result;
    result = stringcompare(S1, S2);
    printf("%d\n", result);
    return 0;
}