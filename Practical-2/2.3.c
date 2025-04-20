#include<stdio.h>
int main(){
    int a,b;
    float c,d;
    char x,y;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);S
    printf("The sum of interger variable a and b is:%d\n",a+b);

    printf("Enter the value of c:");
    scanf("%f",&c);
    printf("Enter the value of d:");
    scanf("%f",&d);
    printf("The sum of float variable c and d is:%f\n",c+d);

    printf("Enter the value of x:");
    scanf("%c\n",&x);
    printf("Enter the value of y:");
    scanf("%c\n",&y);
    printf("The sum of character variable x and y is:%c\n",x+y);

    return 0;
}
