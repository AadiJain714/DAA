#include<stdio.h>
int main()
{
    int n;  

    printf("Enter the no. of rows\n");
    scanf("%d",&n);

    for(int i=n; i>0; i--)
    {
        if(i>1)
        {
            for(int k=2; k<=i; k++)
            {
                printf("  ");
            }
        }
        for(int j=5; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}