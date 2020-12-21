#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int i,j;
    printf("Enter First Matrix");
    printf("\n------------------");
    for(i=0;i<3;i++)
    {
        printf("\nEnter %d Column:\n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter Second Matrix");
    printf("\n----------------------");
    for(i=0;i<3;i++)
    {
        printf("\nEnter %d Column:\n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[i][j]+b[i][j];
        }
    }


    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%8d",b[i][j]);
        }
    }
}