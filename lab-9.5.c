#include<stdio.h>
int arrOne(int a,int b)
{
    int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n]; int count=0;

    for(int i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
            {
                count++;
            }
    }
return count;
}

int main()
{
    int a,b;
    printf("Enter the range a to b:\n");
    scanf("%i %i",&a,&b);
    printf("Enter the values of Array:\n");
    printf("Count from Array is : %i",arrOne(a,b));

return 0;
}
