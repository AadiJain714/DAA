#include<stdio.h>
int main()
{
    int n; 

    printf("Enter the no. of rows you want: ");
    scanf("%d",&n);

    for(int i=n; i>=1; i--)
    {
        for(int s = n-1; s>=i; s--)
        {
            printf("  ");
        }
        for(int j=1; j<= i*2-1 ; j++)
        {
            if( i==1 || i==n || j==1 || j== i*2-1)
            {
                printf("%d ",i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}