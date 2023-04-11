#include<stdio.h>
void  *sub(int, int);
void main()
{
int *p,x,y;
printf("enter x and y values");
scanf("%d %d",&x,&y);
p=sub(x,y);
printf("x=%d",x);
printf("y=%d",y);
return 0;
}
void *sub(int p, int q)
{
int x;
x=p-q;
return &x;
}
 
