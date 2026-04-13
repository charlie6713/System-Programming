#include <stdio.h>

int substring(const char* line, const char* substr) {
    int i, j;
    for(i = 0; line[i] != '\0'; i ++){
        for(j = 0; substr[j] != '\0'; j++){
            if(line[i + j] != substr[j]){
                break;
            }
        }
        if(substr[j] == '\0'){
            return i;
        }
    }
    return -1;
}

int main(void) {
    printf("%d\n", substring("racecar", "car"));     // 4
    printf("%d\n", substring("telephone", "one"));   // 6
    printf("%d\n", substring("monkey", "cat"));      // -1
    return 0;
}

