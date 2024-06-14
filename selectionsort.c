///Selection Sort Code

#include<stdio.h>
int main()
{
    int i,j,n,a[1000];

    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted Array: \n");

    for(i=0;i<n-1;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("%d",a[n-1]);
    return 0;
}
