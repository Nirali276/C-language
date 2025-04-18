// call by value
#include<stdio.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("inside swap a=%d,b=%d\n",a,b);
}
int main(){
    int a=20,b=30;
    printf("Before swap a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("After swap a=%d,b=%d",a,b);
}
// call by reference
#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("inside swap a=%d,b=%d\n",*a,*b);
}
int main(){
    int a=20,b=30;
    printf("Before swap a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap a=%d,b=%d",a,b);
    return 0;
}
