#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int age;
    int salary;
};
struct employee intializeStruct(char *name, int age, int salary) {
    struct employee emp;
    strcpy(emp.name, name);
    emp.age= age;
    emp.salary = salary;
   
  return emp;
}

void printStruct(struct employee emp) {
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %d\n", emp.salary);
}

int main() {
    struct employee emp = intializeStruct("Mariam", 20, 100000);
    printStruct(emp);
 
    return 0;
}
