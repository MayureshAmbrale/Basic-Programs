
/*
 0 to 35            fail                               (35 is exclusive)
 35 to 50           pass class                         (50 is exclusive)
 50 to 60           Second Class                       (60 is exclusive)
 60 to 75           First Class                        (75 is exclusive)
 75 to 100          First Class with Distinction
*/

#include<stdio.h>

#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3
#define RET_SECONDCLASS 4
#define RET_FIRNTCLASS 5
#define RET_DISTINCTION 6

int DisplayResult(float fNo)
{
    if((fNo<0.0f) || (fNo>100.0f))
    {
        return RET_INVALID;
    }
    else if(fNo>=0.0f && fNo<35.0f)
    {
        return RET_FAIL;
    }
    else if(fNo>=35.0f && fNo<50.0f)
    {
        return RET_PASS;
    }
    else if(fNo>=50.0f && fNo<60.0f)
    {
        return RET_SECONDCLASS;
    }
    else if(fNo>=60.0f && fNo<75.0f)
    {
        return RET_FIRNTCLASS;
    }
    else if(fNo>=75.0f && fNo<100.0f)
    {
        return RET_DISTINCTION;
    }

}
int main()
{
    float fValue=0.0f;
    int iRet=0;

    printf("Enter your percentage :\n");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue);
    switch(iRet)
    {
        case RET_INVALID:
        printf("Invalid Input\n");
        break;

        case RET_FAIL:
        printf("Student is FAIL\n");
        break;

        case RET_PASS:
        printf("Student is PASS\n");
        break;

        case RET_FIRNTCLASS:
        printf("Student is in First Class");
        break;

        case RET_SECONDCLASS:
        printf("Student is in Second Class\n");
        break;

        case RET_DISTINCTION:
        printf("Student is in First Class with Distinction\n");
        break;
    }

    return 0;
}