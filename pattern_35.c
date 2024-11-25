#include<stdio.h>
int main()
{
    int s,s1=0, i,j, l=1;

    for( i=1; i<=4; i++)
    {
        for( j=4; j>=i; j--)
        {
            printf("* ");
        }
        for( s= 2; s<=s1; s++)
        {
            printf("  ");
        }
        s1+=2;
        for( j=3; j>=l; j--)
        {
            printf("* ");
        }
        if(i!=1)
        {
            l++;
        }

        printf("\n");
    }

}