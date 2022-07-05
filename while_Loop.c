#include<stdio.h>

int main ()
{

    int number;

    printf("Enter Number: ");

    scanf("%d",&number);

    int i=10;

    while(i>=1)
    {
        int result = i *number;
        printf(" %d * %d = %d\n",number,i,result);
        i--;
    }
    return 0;

}
