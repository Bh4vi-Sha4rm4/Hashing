#include<bits/stdc++.h>
using namespace std;

bool givensum(int arr[], int n, int sum)
{
  unordered_set<int> h;
  int prefix=0;
  for(int i=0; i<n; i++)
  {
    prefix+=arr[i];
    if(prefix==sum)
    return true;
    if(h.find(prefix-sum)!=h.end())
    return true;

    h.insert(prefix);
  }
  return false;
}

int main()
{
  int arr[7]={15, 2, 8, 10, -5, -8, 6};
  int sum=3;

  cout<<givensum(arr,7,sum);

  return 0;
}