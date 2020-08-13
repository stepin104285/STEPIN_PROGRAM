#include "Prime_Number.h"
/**
* @page Prime_Number.c
*
*/

bool checkprime(int a)
{
    if(a<=1) ///Checking Number is less or equal to 1 or not.
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
