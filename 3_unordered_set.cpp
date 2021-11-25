#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
  
  unordered_set <int> s;

  s.insert(10);
  s.insert(5);
  s.insert(15);
  s.insert(20);
  s.insert(25);
  s.insert(35);
  s.insert(30);
  s.insert(40);

  for(auto x:s)
  cout<<x<<" ";
  cout<<endl;

  // another way of printing the set values is below

  for(auto it=s.begin(); it!=s.end(); it++)
  cout<<(*it)<<" ";

  cout<<endl;

  cout<<s.size();
  cout<<endl;

  //finding an element 

  if(s.find(5)!=s.end())
  cout<<"Found";
  else
  cout<<"Not Found";
  cout<<endl;

  //another way of finding an element 

  if(s.count(25))
  cout<<"Found";
  else
  cout<<"Not Found";

  cout<<endl;

  //erasing an element 

  cout<<s.size()<<endl;
  s.erase(15);
  cout<<s.size()<<endl;

}
