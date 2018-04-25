#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int num;
  int *p;
 vector<int> v;
  for(int i=0;i<10;i++)
  {
    cin>>num;
    v.push_back(num);
  }
  cout<<"Elemets of vector are :\n";
  for(int i=0;i<10;i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  vector<int>::iterator itr;
  itr=v.begin();
  cout<<"enter the no to insert \n";
  cin>>num;
  v.insert(itr+5,num);
  cout<<"enter the no to be deleted\n";
  cin>>num;
  for(int i=0;i<10;i++)
  {
    pt++;
    if(v[i]==num)
    {
    p=pt;
    break;
  }
    else p=NULL;
  }
  if(p!=NULL)
  v.erase(pt);
  else
  cout<<"no cant be found in array\n";
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  cout<<endl;
  return 0;
}
