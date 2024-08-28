//Experiment : Selection Sort With Time and Space Complexity Using C
//Adhil Bin Nadeer

#include<stdio.h>
int main()
{
    int i,j,min,limit,time=1,space,temp;
    printf("\n Enter the no of elements in the list : ");
    time++;
    scanf("%d",&limit);
    time++;
    int a[limit];
    printf("\n Enter the elements\n");
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
        min = i;
        time++;
        for(j=i+1;j<limit;j++)
        {
            time++;
            if(a[min]>a[j])
            {
                min=j;
                time+=2;
            }
        }
        if(i!=min)
        {
        temp=a[i];
        a[i] = a[min];
        a[min] = temp;
        time+=4;
        }
    }
    printf("\nSorted Array : ");
    time++;
    time++;
    for(i=0;i<limit;i++)
    {
        printf("%d\t",a[i]);
        time++;
        time++;
    }
    space = 28 + 4*limit;
    time++;
    time++;
    time++;
    time++;
    printf("\n The time complexity of the given program is : %d",time);
    printf("\n The space complexity of the given program is : %d\n",space);
    return 0;
}
