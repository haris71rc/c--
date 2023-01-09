#include <stdio.h>
int main()
{
    int n1,n2,k=0,j;
  scanf("%d%d",&n1,&n2);
  int arr1[n1],arr2[n2],u[k];
  printf("Enter elements of arr1\n");
  for (int i = 0; i < n1; i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter elements of arr2\n");
  for (int i = 0; i < n2; i++)
  {
    scanf("%d",&arr2[i]);
  }
  
  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < k; j++)
    {
        if (u[j]==arr1[i])
        {
            break;
        
        }}
        if (j==k)
        {
            u[j]=arr1[i];
            k++;
        }
  } 
    
    
  
   for (int i = 0; i < n2; i++)
  {
    for (int j = 0; j < k; j++)
    {
        if (u[j]==arr2[i])
        {
            break;
        
        }}
        if (j==k)
        {
            u[j]=arr2[i];
        k++;}
  }
        
        
    
    
  

  for (int i = 0; i < k; i++)
  {
    printf("%d ",u[i]);
  }
return 0;
}