#include <stdio.h>
#include <stdlib.h>

int add(int x,int y)
{
    return x+y;
}

int sub(int x,int y)
{
    return x-y;
}
int main()
{
int (*ptr)(int x,int y)=&add;

int result=ptr(2,6);

printf("Addition : %d \n",result);
int (*ptr2)(int x,int y)=&sub;

int result1;
printf(" Subtraction: %d\n",(*ptr2)(8,5));

}
