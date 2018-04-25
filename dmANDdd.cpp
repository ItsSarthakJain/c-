#include<iostream>
#include<string.h>
using namespace std;
class dd;
class dm
{
  float metre;
  float centimetre;
  friend void convert(dm m,dd i);
public:
  dm()
  {
    metre=10;
    centimetre=10;
  }
  dm(float a,float b)
  {
    metre=a;
    centimetre=b;
  }
};
class dd
{
  float feet;
  float inch;
  friend void convert(dm m,dd i);
public:
  dd()
  {
    feet=10;
    inch=10;
  }
  dd(float a,float b)
  {
    feet=a;
    inch=b;
  }
};
void convert(dm m,dd i)
{
  m.metre*=3.208;
  m.centimetre*=0.0328;
  float feet=i.feet;
  float inch=i.inch;
  inch=feet*12+inch;
  for(float i=1;12*i<=inch;i++)
  i--;
  feet=i;
  inch=inch-12*i;
}
  cout<<feet<<endl<<inch;
}
float main()
{
  dm obj1;
  dd obj2;
  float a,b,c,d;
  cout<<"Enter metre and centimetre\n";
  cin>>a>>b;
  obj1=dm(a,b);
  cout<<"Enter feet and inches\n";
  cin>>c>>d;
  obj2=dd(c,d);
  return 0;
}
