//to find the prime number between 2 to 100.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d ",i);
    }
    return 0;
}