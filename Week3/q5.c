#include <stdio.h>

#include <stdio.h>

typedef struct{
    char name[10];
    int age;
    double weight;
} person_2;

typedef struct{
    char jobname[100];
    char address[100];
} person_3;

typedef struct{
    person_2 person;
    person_3 job_info;
} all_info;

int main(){
    return 0;
}