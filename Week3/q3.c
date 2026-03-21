#include <stdio.h>
#include <string.h>

struct person_s{
    char name[10];
    int age;
    double weight;
};

int main(){
    struct person_s person;

    person.age = 18;
    person.weight = 130.0;
    strcpy(person.name, "charlie");

    printf("%s, you are a good person, %d is your age and %.2f is your weight\n",
           person.name, person.age, person.weight);

    return 0;
}