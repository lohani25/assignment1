#include<stdio.h>
int main()
{
    int N,I;
    printf("input a number:");
    scanf("%d",&N);
    I=(N%2);

    switch(I)
    {
        case 0:
        {
            printf("The Number is Even");
            break;
        }
        case 1:
        {
            printf("The Number is Odd");
            break;
        }
        default:
        break;
    }
    return 0;

}