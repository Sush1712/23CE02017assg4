#include<stdio.h>
int main()
{
    int ch;
    printf("1:Monday");
    printf("\n 2:Tuesday");
    printf("\n 3:Wednesday");
    printf("\n 4:Thursday");
    printf("\n 5:Saturday");
    printf("\n 6:Saturday");
    printf("\n 7:Sunday");
    printf("\n enter ch");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("Monday");
    
        break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wedbesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("incorrect input");
        break;
    }
    return 0;
}