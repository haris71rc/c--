#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int temp,j;
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=temp;

    }
       printf("The sorted array is\n");
for (int j = 0; j < n; j++)
{
    printf("%d"" ",arr[j]);
}
return 0;
       }

