#include<bits/stdc++.h>
using namespace std;

int intersection(int ar[], int br[], int m, int n)
{
  unordered_set<int> a(ar, ar+m);
  int res=0;
  for(int i=0; i<n; i++)
  {
    if(a.find(br[i])!=a.end())
    {
      res++;
      a.erase(br[i]);
    }
  }
  return res;

}

int main()
{
  int arr[10]={1,1,2,2,3,4,5,5,6,7};
  int brr[10]={1,4,5,7,8,4,3,8,9,9};
  
  cout<<"number of common values in both arrays: "<<intersection(arr, brr, 10, 10);
  return 0;

}