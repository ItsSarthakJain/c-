#include<iostream>
using namespace std;
class mile;
class km
{
double kms;
public:
  void getdata()
  {
    cin>>kms;
  }
  void show()
  {
    cout<<"kms are "<<kms<<endl;
  }
  int get()
  {
    return kms;
  }
};

class mile
{
  double miles;
public:
  void operator =(km a)
  {
    miles=a.get()/1.6;
  }
  void show()
  {
  cout<<"miles are "<<miles<<endl;
  }
};

int main()
{
  km a;
  mile b;
  cout<<"h'";
  a.getdata();
  b=a;
  a.show();
  b.show();
  return 0;
}
