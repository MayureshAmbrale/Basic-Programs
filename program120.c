#include<stdio.h>

int Display(int Arr[],int iSize)
{
    int i=0;
    int iSum=0;
    for(i=0;i<iSize;i++)
    {
    iSum=iSum+Arr[i];
    
    }
    return iSum;
}

int main()
{
    int iNo=0;
    int i=0;
    int Brr[5];
    int iRet=0;
    printf("Enter elements \n");
    for(i=0;i<5;i++)
    {
        
        scanf("%d",&Brr[i]);
    }
    
    iRet=Display(Brr,5);//Display(100,5)
    printf(" Addition is %d",iRet);
    

    return 0;
}
