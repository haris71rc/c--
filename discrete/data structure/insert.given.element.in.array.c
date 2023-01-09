#include <stdio.h>
int main()
{
    int n,val,loc;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value the element and position ");
    scanf("%d%d",&val,&loc);
    for (int i=n-1; i >=loc-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc-1]=val;
     printf("The given array is\n");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d"" ",arr[i]);
    }
    return 0;

}