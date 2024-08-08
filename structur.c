#include <stdio.h>

struct student {
    int no;
    char name[10];
};

int main() {
    struct student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.no);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Roll number: %d\n", s1.no);
    printf("Name: %s\n", s1.name);

    return 0;
}
