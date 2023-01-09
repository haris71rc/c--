#include <stdio.h>
int main()
{
    int n,val,c=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&val);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==val)
        {
            c++;
        }
        
    }
    if (c!=0)
    {
        printf("element is found");
    }
    else
    printf("element is not found");
    return 0;
    
}