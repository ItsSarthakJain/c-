#include<iostream>
using namespace std;

class dynamic_array
{
  int size;
  int *p;
public:
  void get()
  {
    cout<<"enter array elements\n";
    for(int i=0;i<5;i++)
    cin>>p[i];
  }
  void put()
  {int sum=0;
    cout<<"sum of elements is:\n";
    for(int i=0;i<5;i++)
    sum+=p[i];
    cout<<sum<<endl;
  }
  dynamic_array()
  {
    p=new int [5];
  }
};
int main()
{

  dynamic_array j;
  j.get();
  j.put();
  return 0;
}
