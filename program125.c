
#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[],int iSize)
{
    int i=0;
    printf("Even elenemts are\n");
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iCount=0;
    int i=0;
    int *Brr=NULL;
    int iRet =0;


    printf("Enter number of elements that you want\n");
    scanf("%d ",&iCount);

    
    Brr=(int*)malloc(iCount * sizeof(int));
    printf("Enter the elements :\n");
    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("Elements are\n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\t",Brr[i]);
    }
    DisplayEven(Brr,iCount);
   

    free(Brr);
    return 0;
}
