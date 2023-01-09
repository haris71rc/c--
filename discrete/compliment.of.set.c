#include<stdio.h>
int main(){
   int a[100],b[100],n,i,m,j;
   printf("Enter total number of element in universal set ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    printf("Enter total number of element in set A ");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    scanf("%d",&b[i]);
   }
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
        if(a[j]==b[i])
        {
            a[j]=0;
        }
    }
   }
    for(i=0;i<n;i++)
    {  if(a[i]==0)
    {
        continue;
    }
    else{
          printf("%d\t",a[i]);
    }
       
    }
    return 0;
   }