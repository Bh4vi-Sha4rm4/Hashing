#include<bits/stdc++.h>
using namespace std;

//this function returns true(1) if array conatains a pair who has sum equal to the given sum

bool ispair(int arr[], int n, int sum)
{
  unordered_set <int> h;
  for(int i=0; i<n; i++)
  {
    if(h.find(sum-arr[i])!=h.end())
    return true;
    else
    h.insert(arr[i]);
  }
  return false;
}
int main()
{
  int arr[5]={3,2,8,15,-8};
  int sum=17;
  cout<<ispair(arr, 5 ,sum);
  return 0;
}