#include<stdio.h>
main()
{
    int m,n,p,q,i,j,k,sum=0;
    int matrix1[10][10],matrix2[10][10],resultant[10][10];
    printf("enter number of rows and column of matrix 1 less than or equal to 10\n");
    scanf("%d%d",&m,&n);
    printf("enter elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter number of rows and columns of matrix 2 less than or equal to 10\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("matrix multiplication is not possible");
    }
    else
    {
        printf("enter elements of matrix 2\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&matrix2[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<p;k++)
                {
                    sum=sum+matrix1[i][k]*matrix2[k][j];
                }
                resultant[i][j]=sum;
                sum=0;
            }
        }
        printf("product of the matrices:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",resultant[i][j]);
            }
            printf("\n");
        }

    }


}
