#include<iostream>
#include<map>
using namespace std;
int main()
{
  //pair<string,int>ms;
  map <string,int>mp;
  map <string,int>::iterator itr;
  string s;
  int item;
  for(int i=0;i<5;i++)
  {
    cin>>s;
  mp.insert(pair<string,int> (s,NULL));
  cin>>item;
  mp.insert(pair<string,int> (NULL,item));
  }
  cout<<"size of map is :"<<mp.size()<<endl;
  for(itr=mp.begin();itr!=mp.end();itr++)
  {
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
  }
  cout<<"Enter value to be delted \n";
  cin>>s;
  mp.erase(s);
  for(itr=mp.begin();itr!=mp.end();itr++)
  cout<<(*itr).first<<" "<<(*itr).second<<endl;
  cout<<"\nEnter key to be found";
  cin>>s;
  cout<<"\n"<<mp.find(s)->second<<endl;
  /*
  itr=mp.find(s);
  cout<<"\n"<<(*itr).second;
  */
  return 0;
}
