#include<iostream>
#include<string.h>
using namespace std;
template <class T>
void bubble(T a[],int n)
{
  for(int i=0;i<n;i++)
  for(int j=n-1;i<j;j--)
  if(a[j]<a[j-1])
  swap(a[j],a[j-1]);
}
  template <class X>
  void swap(X &a,X &b)
  {
    X temp=a;
    a=b;
    b=temp;
  }
int main()
{
  int x[5]={10,5,8,3,2};
  float y[3]={1.2,5.5,3.3};
  char a[3]={'q','b','c'};
  string p[3]={"qb","bcd","abc"};
  bubble(x,5);
  bubble(y,3);
  bubble(a,3);
  bubble(p,3);
  for(int i=0;i<5;i++)
  {
    cout<<x[i]<<"  ";
  }
  cout<<endl;
  for(int i=0;i<3;i++)
  cout<<y[i]<<"  ";
  cout<<endl;
  for(int i=0;i<3;i++)
  cout<<a[i]<<" ";
  cout<<endl;
  for(int i=0;i<3;i++)
  cout<<p[i]<<"  ";
  cout<<endl;
  return 0;
}
