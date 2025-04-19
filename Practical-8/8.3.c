#include<stdio.h>
int number = 20;
extern int number;

void display() {
    printf("Value of number: %d\n", number);
}

int main() { 
    display();

    return 0;
}
