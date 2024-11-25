#include<stdio.h>
int main()
{
    int n; 

    printf("Enter the number of rows you want\n");
    scanf("%d",&n);

    for(int i=n; i>=1; i--)
    {
        if(i>1)
        {
            for(int k=2; k<=i; k++)
            {
                printf("  ");
            }
        }
        for(int j=n; j>=i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
}