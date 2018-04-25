#include<iostream>
using namespace std;
int count=0;
class dis
{
int a;
public:
dis()
  {
    count++;
    a=count;
  cout<<"\nconstructor: "<<count;

}
~dis()
  {

    cout<<"\ndistructor called:\t"<<"a= "<<a<<"count= "<<count;
    count--;
  }
};

int main()
{


dis  obj1;

{
  dis  obj2,obj3;
}
dis obj4;
  return 0;
}
