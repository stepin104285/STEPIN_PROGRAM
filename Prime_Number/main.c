#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


bool checkprime(int a)
{
    if(a<=1)
    {
        return false;
    }
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    printf("Enter Number To check prime number \n");
    scanf("%d",&num);
    printf("%s",checkprime(num)? "true":"false");

    return 0;
}
