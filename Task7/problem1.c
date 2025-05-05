#include <stdio.h>
typedef struct {
    unsigned int roll_Num : 4; //0-15
    unsigned int age : 8;    //0-255
    unsigned int Marks : 3; //0-7
    char name[20];
    char address[20];

}student_info;
// (4 + 8 + 3)-> 2 + 20 + 20 = 42 bytes
// due to allignment size is 44 bytes (4+20+20)
void print_student_info(student_info *s) {
    printf("Roll Number: %u\n", s->roll_Num);
    printf("Age: %u\n", s->age);
    printf("Marks: %u\n", s->Marks);
    printf("Name: %s\n", s->name);
    printf("Address: %s\n", s->address);
}

int main() {
    student_info s1 = {1, 20, 5, "John Doe", "123 Main St, City"};
    print_student_info(&s1);
    printf("Size of the struct: %zu bytes\n", sizeof(student_info));
    
    return 0;
}