#include<stdio.h>
int main(){
    int a;
    int *p;
    p=&a;
    printf("Address of variable=%d\n",p);
    printf("Address of variable=%x\n",p);
    printf("Address of variable=%u\n",p);
    return 0;
}
