#include<iostream>
using namespace std;
class test
{
static int count;
int code;
public:
  void setcode()
  {
    code=++count;
  }
  void showcode()
  {
    cout<<"Object no "<<code<<endl;
  }
  static void showcount()
  {
    cout<<"count: "<<count;
  }
};
int test :: count;

int main()
{
  test t1,t2;
  t1.setcode();
  t2.setcode();
  test :: showcount();
  test t3;
  t3.setcode();
  test::showcount();
  t1.showcode();
  t2.showcode();
  t3.showcode();
  return 0;
}
