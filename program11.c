#include<stdio.h>
#include<stdbool.h>

//Algoritham
/*
    START
        Accept one number as No
        If the number is grater than 30 and if the number is less then 50
        then display the message as number is in range 
        otherwise
        display the message as number is not in the range 
    STOP
*/

bool CheckRange(int iNo)
{
    if(iNo>=30 && iNo<=50)
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
    int iValue=0;
    bool bRet =false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet =CheckRange(iValue);

    if(bRet==true)
    {
        printf("%d is in the range 30 and 50\n",iValue);
    }
    else
    {
        printf("%d is not in the range 30 and 50\n",iValue);
    }

    return 0;
}