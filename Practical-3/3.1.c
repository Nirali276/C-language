#include<stdio.h>
int main(){
    int a,b,c,d,res;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter the value of c=");
    scanf("%d",&c);
    printf("Enter the value of d=");
    scanf("%d",&d);
    res=a+b/c+d;
    printf("Expression1 %d+%d/%d+%d=%d\n",a,b,c,d,res);
    res=(a+b)*(a-b);
    printf("Expression2 (%d+%d)*(%d-%d)=%d\n",a,b,a,b,res);
    res=a+b/2;
    printf("Expression3 %d+%d/2=%d\n",a,b,res);
    res=(a+b)/(c+d);
    printf("Expression4 (%d+%d)/(%d+%d)=%d\n",a,b,c,d,res);
    res=a+b*a-b;
    printf("Expression5 %d+%d*%d-%d=%d\n",a,b,a,b,res);
    res=(a+b)/2;
    printf("Expression6 (%d+%d)/2=%d\n",a,b,res);
    return 0;
    
}
