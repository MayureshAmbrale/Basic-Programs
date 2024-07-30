
#include<stdio.h>
#include<stdlib.h>

__________(int ptr[],int iSize)
{
    
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
    iRet=_______(Brr,iCount);
   

    free(Brr);
    return 0;
}
