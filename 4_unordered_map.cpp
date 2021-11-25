#include<bits/stdc++.h>
using namespace std;

int main()
{
  //creating the unordered map
  unordered_map<string, int> m;
  m["ten"]=10;
  m["twenty"]=20;
  m["thirty"]=30;
  m["forty"]=40;
  m["fifty"]=50;
  m["sixty"]=60;
  m["seventy"]=70;
  //printing the values

  for(auto x: m)
  cout<<x.first<<" "<<x.second<<endl;
  cout<<endl<<endl;
  //inserting new key-value pairs

  m.insert({"eighty", 80});
  for(auto x: m)
  cout<<x.first<<" "<<x.second<<endl;
  cout<<endl<<endl;

  //finding an element
  if(m.find("hundered")!= m.end())
  cout<<"Found";
  else
  cout<<"Not Found";
  cout<<endl<<endl;
  //another way of finding elements 

  if(m.count("sixty")>0)
  cout<<"Found";
  else
  cout<<"Not Found";
  cout<<endl<<endl;

  //size of unordered map

  cout<<m.size()<<endl<<endl;

  //erasing the elements

  m.erase("fifty");
  cout<<m.size()<<endl<<endl;



}