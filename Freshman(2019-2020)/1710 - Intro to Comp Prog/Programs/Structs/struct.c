#include <stdio.h>

struct Student {

    char grade;
    int id;
    float gpa;
};


int main() {

    struct Student jason, paul;

    jason.grade = 'A';
    jason.id = 1707564;
    jason.gpa = 3.5;

    paul.grade = 'C';
    paul.id = 1347865;
    paul.gpa = 2.7;

    printf("Jason: \n");

    printf("Grade: %c\n", jason.grade);
    printf("ID: %i\n", jason.id);
    printf("GPA: %f\n", jason.gpa);

    printf("\n\n");

    printf("Paul: \n");

    printf("Grade: %c\n", paul.grade);
    printf("ID: %i\n", paul.id);
    printf("GPA: %f\n", paul.gpa);
    
} 
