//Experiment : Sparse Matrix
//Adhil Bin Nadeer

#include<stdio.h>
int main()
{
    int i,j,count=0,r1,cl1,SparseMatrix[30][3];
    printf("\n Enter the number of rows in matrix : ");
    scanf("%d",&r1);
    printf("\n Enter the number of columns in matrix : ");
    scanf("%d",&cl1);
    int ar[r1][cl1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<cl1;j++)
        {
            printf("\nElement [%d][%d] : ",i,j);
            scanf("%d",&ar[i][j]);
        }
    }
    printf("\n\n\n Your Matrix : ");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<cl1;j++)
        {
            printf("%d\t",ar[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<cl1;j++)
        {
            if(ar[i][j]!=0)
            {
                count++;
                SparseMatrix[count][0]=i;
                SparseMatrix[count][1]=j;
                SparseMatrix[count][2]=ar[i][j];
            }
        }
    }
    SparseMatrix[0][2]=count;
    printf("\n\n\nRow\tColumn\tValue");
    printf("\n%d\t%d\t%d\t\t",r1,cl1,count);
    printf("\n\n\nSparse Matrix : ");
    for(i=1;i<=count;i++)
    {
        printf("\n%d\t%d\t%d\n",SparseMatrix[i][0],SparseMatrix[i][1],SparseMatrix[i][2]);
    }
    return 0;
}
