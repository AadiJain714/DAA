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
    int n,l;

    printf("Enter the number of rows you want (if you give even number row will return after dicrementing one number) \n");
    scanf("%d",&n);
    
    int r=odd(n);
    
    if ( r == 0)
    n=n-1;
    
    l=n/2+1;
    

    for(int i=1; i<=n; i++)
    {
     
            if(i <= ((n/2)+1))
        {
            for(int k=1; k<=i;k++)
            {
                printf("%d ",k);
            }
        }
        else
        {
            l--;
            for(int j= 1; j<= l ; j++)
            {
                printf("%d ",j);
            }
        }
        
        printf("\n");
        
    }
}