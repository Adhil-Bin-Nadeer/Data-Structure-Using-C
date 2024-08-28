//Experiment : Polynomial Representation
//Adhil Bin Nadeeer

#include<stdio.h>
void main()
{
    int p[100];
    int d,i;
    printf("Enter the degree of polynomial : ");
    scanf("%d",&d);
    if(d<0||d>100)
    {
        printf("Choose a different number");
    }
    else
    {
        printf("Enter the coefficients of different terms : ");
        for(i=d;i>=0;i--)
        {
            scanf("%d",&p[i]);
        }
        printf("The given polynomial is : ");
        for(i=d;i>=0;i--)
        {
            if(p[i]!=0)
            {
                if(i==d)
                {
                   printf("%dx^%d",p[i],i);
                }
                else if(i==1)
                      {
                        printf("+%dx",p[i]);
                    }
                    else if(i==0)
                        {
                            printf("+%d",p[i]);
                        }
                        else
                        {
                            printf("+%dx^%d",p[i],i);
                        }
              }
         }
    }
    printf("\n");
}
