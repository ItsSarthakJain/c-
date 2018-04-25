#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
  int n,no;
list <int> ar;
list <int>::iterator itr;
cout << "enter elements" << '\n';
cin>>n;
do
{
  ar.push_back(n);
  cin>>n;
} while(n!=-1);
for(itr=ar.begin();itr!=ar.end();itr++)
cout<<*itr<<" ";
cout<<endl;
cout<<"Enter no before which you want to insert and the no to insert\n";
cin>>n>>no;
itr = find (ar.begin(),ar.end(),n);
ar.insert(itr,no);
cout<<"done\n";
for(itr=ar.begin();itr!=ar.end();itr++)
cout<<*itr<<" ";
return 0;
}
