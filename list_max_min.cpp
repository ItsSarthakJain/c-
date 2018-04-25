#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
  int n;
list <int> ar;
list <int>::iterator itr;
cout << "enter elements" << '\n';
cin>>n;
do
{
  ar.push_back(n);
  cin>>n;
} while(n!=-1);
itr=min_element(ar.begin(),ar.end());
/*
ar.sort();
itr = ar.begin();
*/
cout<<"min: "<<*itr;
itr=max_element(ar.begin(),ar.end());
cout<<"\nmax: "<<*itr;
return 0;
}
