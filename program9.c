#include<stdio.h>
#include<stdbool.h>
//User is going to enter only positive number 

//Algorithm
/*
    Start 
        accept one number from user 
        divide that number no by 3 
        if remainder is 0
        divide that number no by 5
        if remainder is 0
        then print number is divisible by 3 and 5
        otherwise print number is not  divisible by 3 and 5
*/



//////////////////////////////////////////////////////////
//
//  Function name :   CheckDivisible
//  Description :     Used to check whether number is divisible by 3 and 5
//  Input :           Integer 
//  Output :          Boolean
//  Auther :          Mayuresh Ambrale
//  Date  :           16/04/2024
//
///////////////////////////////////////////////////////////////
bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5)== 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue =0;
    bool bRet=false;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet==true)
    {
        printf("%d is  divisible by 3 and 5 \n",iValue);
    }
    else 
    {
        printf("%d is not divisible by 3 or 5\n",iValue);
    }

    return 0;
}

