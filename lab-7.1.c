#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[20];
};

int main() {

    struct employee e1;


    e1.id = 30;
    strcpy(e1.name, "Mili Akther");


    printf("Employee ID: %d\n", e1.id);
    printf("Employee Name: %s\n", e1.name);

    return 0;
}
