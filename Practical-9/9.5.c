#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    *p=25;
    printf("After change value of pointer:=%d\n",a);
    return 0;
}
