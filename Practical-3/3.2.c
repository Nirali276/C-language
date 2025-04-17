//A
#include<stdio.h>
int main(){
    float floatvalue=10.8;
    int intvalue=floatvalue;
    printf("float:%d,intvalue:%f\n",floatvalue,intvalue);
    return 0;
}
//B
#include<stdio.h>
int main(){
  float x=10.8;
  int y=(int)x;
  printf("x:%f,y:%d",x,y);
  return 0;
}
