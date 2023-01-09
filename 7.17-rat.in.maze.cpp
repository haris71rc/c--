/*Backtacking is a algorithmic technique for solving recursive problems by trying to build every possibe solution incrementally 
and removing those solution that fails to satisfy the constraisn of the problems at any point of time*/

#include<iostream>
using namespace std;
bool issafe(int** arr,int x, int y, int n)
{
    if (x<n && y<n && arr[x][y]!=0)
    {
        return true;
    }
    else
        return false;
    
}
bool ratinmaze(int** arr, int x, int y, int n, int** solarr)   //rat can only move in right and downward direction 
{
    if (issafe(arr,x,y,n))
    {
      solarr[x][y]=1;
      if (ratinmaze(arr,x+1,y,n,solarr))    //movement in right direction
      {
        return true;
      }
        if (ratinmaze(arr,x,y+1,n,solarr))  //movement in downward direction
        {
            return true;
        }
        solarr[x][y]=0;        //backtracking
        return false;
    }
    return false;
}