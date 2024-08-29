// Linear Search with Time and Space Complexity
//Adhil Bin Nadeer


#include<stdio.h>
int main()
{
    int n,i,x,count=0,time=2,space;
    printf("\nEnter the no of elements in list : ");
    time++;
    scanf("%d",&n);
    time++;
    int a[n];
    printf("\n Enter the elements \n");
    time++;
    time++;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        time++;
        time++;
    }
    printf("\nEnter the elements to be searched : ");
    time++;
    scanf("%d",&x);
    time++;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            count++;
            printf("\n The %d found in the list at %d",x,i+1);
            time++;
            time++;
        }
        time++;
     }
     if(count>0)
     {
          printf("\n the element is found %d times",count);
          time++;
          time++;
     }
     else
     {
           printf("the element is not found");
           time++;
           time++;
     }
     space=24+(4*n);
     time++;
     time++;
     time++;
     time++;
     printf("\n The space of the complexity of the program is %d ",space);
     printf("\n The time complexity of the program is %d",time);
     return 0;
}
