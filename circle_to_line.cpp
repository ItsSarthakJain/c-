#include<iostream>
using namespace std;
class line;
class circle
{
double rad,cir;
public:
  void getdata()
  {
    cin>>rad;
  }
  void show()
  {
    cout<<"rad is "<<rad<<endl;
  }
  int get()
  {
    cir=2*3.14*rad;
    return cir;
  }
};

class line
{
  double len;
public:
  void operator =(circle a)
  {
    len=a.get();
  }
  void show()
  {
  cout<<"length of line is "<<len<<endl;
  }
};

int main()
{
  circle a;
  line b;
  a.getdata();
  b=a;
  a.show();
  b.show();
  return 0;
}
