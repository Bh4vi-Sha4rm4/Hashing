#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void frequency(int arr[], int n)
{
  unordered_map <int, int> m;
  for(int i=0; i<n; i++)
  m[arr[i]]++;

  for(auto x: m)
  cout<<x.first<<" "<<x.second<<endl;

}

int main()
{
  int arr[10]={1,1,2,2,3,4,5,5,6,7};

  frequency(arr, 10);
  return 0;
}