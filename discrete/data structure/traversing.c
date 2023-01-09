#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The given array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d"" ",arr[i]);
    }
    return 0;

}