#include<stdio.h>


//void f1();

void f1()
{
static int b=0;
printf("b = %d\n", b);
b++;
} 

int main()
{
//int b=0;
f1();
f1();
f1();
f1();
}