#include<iostream>
#include<math.h>
using namespace std;
class rect;
class cord
{
double rad,ang;
public:
  void getdata()
  {
    cout<<"enter radius and angle\n";
    cin>>rad>>ang;
  }
  void show()
  {
    cout<<"rad is "<<rad<<endl;
    cout<<"angle is "<<ang<<endl;
  }
  int get()
  {
    return rad;
  }

  int getb()
  {
    return ang;
  }
};

class rect
{
  double len,bre;
public:
  void operator =(cord a)
  {
    len=a.get()*cos(a.getb());
    bre=a.get()*sin(a.getb());
  }
  void show()
  {
  cout<<"length of rect is "<<len<<endl;
  cout<<"breadth of rect is "<<bre<<endl;
  }
};

int main()
{
  cord a;
  rect b;
  a.getdata();
  b=a;
  a.show();
  b.show();
  return 0;
}
