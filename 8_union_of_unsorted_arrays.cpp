#include<bits/stdc++.h>
using namespace std;

int unionelements(int arr[], int brr[], int m, int n)
{
  unordered_set <int> h(arr, arr+n);
  for(int i=0; i<n; i++)
  h.insert(brr[i]);

  for(auto it=h.begin(); it!=h.end(); it++ )
  cout<<(*it)<<" ";
  cout<<endl;

  return h.size();

 
}
int main()
{
  int arr[10]={1,1,2,2,3,4,5,5,6,7};
  int brr[10]={1,4,5,7,8,4,3,8,9,9};

  cout<<"Union of two arrays: "<<unionelements(arr, brr, 10, 10);
}