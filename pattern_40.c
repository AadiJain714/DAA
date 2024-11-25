#include<stdio.h>
int odd(int n)
{
    int r = n%2;;
    if( r == 0)
    return r;
    else
    return r;
}
int main()
{
    int n;
    
    printf("enter the number of rows you want\n");
    scanf("%d",&n);
    
    int r=odd(n);
    
    for(int i=1; i<=n; i++)
    {
        if(i<= n/2+1)
        {
        for(int s=2; s<=i;s++)
        {
            printf(" ");
        }
        for(int j= n/2+1; j>=i; j--)
        {
            printf("%d ",j);
        }
        }
        else
        {
            for(int s= n-1; s>=i;s--)
            {
                printf(" ");
            }
            for(int j= n/2+1;j<=i; j++)
            {
                if( r==0 )
                {
                printf(" %d",j);
                }
                else
                {
                    printf("%d ",j);
                }
            }
        }

        printf("\n");
    }
}