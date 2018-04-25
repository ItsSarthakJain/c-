#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main()
{
  map <string,int>mp;
  map <string,int>::iterator itr;
  string s;
  int item;
  cout<<"enter data\n";
  for(int i=0;i<3;i++)
  {
  cin>>s;
  cin>>item;
  mp.insert(pair<string,int> (s,item));
  }
  cout<<"size of map is :"<<mp.size()<<endl;
  for(itr=mp.begin();itr!=mp.end();itr++)
  {
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
  }
  cout<<"Enter value to be found \n";
  cin>>s;
  itr=mp.find(s);
  cout<<"for city "<<(*itr).first<<"std code is "<<setprecision(4)<<(*itr).second;
  return 0;
}
