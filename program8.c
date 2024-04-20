#include<stdio.h>
#include<stdbool.h>
//User is going to enter only positive number 

//Algorithm
/*
    Start 
        accept one number from user 
        divide that number no by 2
        if remainder is 0
        then display the result is even number
        otherwise display the result is odd number
*/



//////////////////////////////////////////////////////////
//
//  Function name :   Check Even Odd
//  Description :     Used to check whether number is even or odd
//  Input :           Integer 
//  Output :          Boolean
//  Auther :          Mayuresh Ambrale
//  Date  :           16/04/2024
//
///////////////////////////////////////////////////////////////
bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo%2)==0)
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

    bRet = CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("Number is even :%d\n",iValue);
    }
    else 
    {
        printf("Number is odd :%d\n",iValue);
    }

    return 0;
}