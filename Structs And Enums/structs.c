#include <stdio.h>

// Defining a structure to represent a student
struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{

    // Declaring and initializing a structure variable
    struct Student s1 = {"Resul", 20, 25};

    // Designated Initializing another structure
    struct Student s2 = {.age = 10, .name = "Taha", .grade = 25};

    // Accessing structure members
    printf("%s\t%d\t%.2f\n", s1.name, s1.age, s1.grade);
    printf("%s\t%d\t%.2f\n", s2.name, s2.age, s2.grade);

    return 0;
}
