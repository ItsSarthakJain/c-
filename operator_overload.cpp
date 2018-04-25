#include<iostream>
using namespace std;

class Time
{
  int hr;
  int min;
public:
  Time operator ++();
  void display();
  Time operator ++(int);
  Time operator --();
  Time operator --(int);
  Time(int h,int m);
};
Time::Time(int h=0,int m=0)
{
  hr=h;
  min=m;
}
Time Time::operator ++() ////////PRE INCREMENT
{
  hr++;
  min++;
  if(min>=60)
{  min-=60;
  hr++;
}
return Time(hr,min); ///temperrory object
}
Time Time::operator ++(int)  ///////POST INCREMENT
{
  hr++;
  min++;
  if(min>=60)
{  min-=60;
  hr++;
}
  return Time(hr,min);  ///temperrory object and retrning that temp
}
Time Time::operator --(int)  ///////POST INCREMENT
{
  hr--;
  min--;
  if(min>=60)
{  min-=60;
  hr++;
}
  return Time(hr,min);  ///temperrory object and retrning that temp
}
Time Time::operator --()  ///////POST INCREMENT
{
  hr--;
  min--;
  if(min>=60)
{  min-=60;
  hr++;
}
  return Time(hr,min);  ///temperrory object and retrning that temp
}
void Time::display()
{
  cout<<"hours="<<hr<<endl;
  cout<<"minutes="<<min<<endl;
}
int main()
{
  Time t1(20,60);
  Time t2 =++t1;
  t2.display();
  Time t3=t1++;
  t3.display();
  Time t4=t1--;
  t4.display();
  Time t5=--t1;
  t5.display();
  return 0;
}
