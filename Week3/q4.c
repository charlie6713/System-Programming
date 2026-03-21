#include <stdio.h>

typedef struct{
    char name[10];
    int age;
    double weight;
} person_t;

int main(){
    person_t person2;
    person2.age = 18;
    printf("%d\n", person2.age);
    return 0;
}