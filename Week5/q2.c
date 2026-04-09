#include <stdio.h>

int string_compare(const char* w1, const char* w2, unsigned int len) {  
    int i = 0;
    while(i < len){
        if(w1[i] != w2[i]){
            return  w1[i] - w2[i];
        }
        
        if (w1[i] == '\0'){
            return 0;
        }
        i ++;
    }
    return 0;
}

void main(void) {
    int result;
    result = string_compare("Hello", "Hello", 5);
    printf("%d\n", result);
    result = string_compare("Hello", "byebye", 5);
    printf("%d\n", result);
    // TODO: Write more test below

}