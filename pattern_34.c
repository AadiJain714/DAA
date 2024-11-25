#include<stdio.h>
int main()
{
    int s1=1, l=1;

    for(int i = 1; i<=4; i++)
    {
        for( int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(int s=5; s>=s1; s--)
        {
            printf("  ");
            
        }
        s1+=2;

        for(int c = 1; c<= l; c++)
        {
            printf("%d ",c);
        }
            if(i!=3)
            {
                l++;
            }
        
        printf("\n");
    }
}