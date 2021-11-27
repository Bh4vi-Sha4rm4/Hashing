#include<bits/stdc++.h>
using namespace std;

//return 0 if there is no pair whose sum is zero.
bool zerosubarray(int arr[], int n)
{
  unordered_set<int> s;
  int prefix=0;
  for(int i=0; i<n; i++)
  {
    prefix+=arr[i];
    if(s.find(prefix)!=s.end())
    return true;

    if(prefix==0)
    return true;

    s.insert(prefix);
  }
  return false;

}

int main()
{
  int arr[6]={1,4,13,-2,-10,5};

  cout<<zerosubarray(arr,6);
  return 0;
}