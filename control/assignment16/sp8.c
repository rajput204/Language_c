#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=65;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%c",k++);
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}