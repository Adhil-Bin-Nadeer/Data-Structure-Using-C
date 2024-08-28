//Experiment : Bubble Sort With Time Complexity Using C
//Adhil Bin Nadeer

#include<stdio.h>
int main()
{
    int i,j,time=1,limit,temp,space;
    printf("\n Enter the no of elements in the list : ");
    time++;
    scanf("%d",&limit);
    time++;
    int a[limit];
    printf("\n Enter the elements \n");
    time++;
    time++;
    for(i=0;i<limit;i++)
    {
        time++;
        scanf("%d",&a[i]);
        time++;
    }
    time++;
    for(i=0;i<limit-1;i++)
    {
        time++;
        time++;
        for(j=0;j<limit-i-1;j++)
        {
            time++;
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                time+=4;
            }
        }
    }
    time++;
    printf("\nSorted Array : ");
    time++;
    for(i=0;i<limit;i++)
    {
        time++;
        time++;
        printf("%d\t",a[i]);
    }
    space = 24 + 4*limit;
    time++;
    time++;
    time++;
    time++;
    printf("\n The time complexity of the given program is : %d",time);
    printf("\n The space complexity of the given program is : %d\n",space);
    return 0;
}
