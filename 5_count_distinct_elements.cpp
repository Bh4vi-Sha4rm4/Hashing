#include<bits/stdc++.h>
using namespace std;

int distinct(int arr[], int n)
{
  unordered_set<int> s;
  for(int i=0; i<n; i++)
  s.insert(arr[i]);

  return s.size();
}

int main()
{
  int arr[10]={1,1,2,2,3,4,5,5,6,7};
  

  cout<<"total distinct elements in the array are: "<<distinct(arr, 10)<<endl;
  return 0;
}