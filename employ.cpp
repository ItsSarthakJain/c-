#include<iostream>
#include<string.h>
using namespace std;
class employ
{
  char name[20];
  int years;
  float sal;
  int incr;
  float salary(int inc)
  {
  sal+=(sal*inc)/100;
  return sal;
  }
void incrment()
  {
    if(years<2)
    {
      incr=1;
    cout<<"\nNot eligible for increment\n";
    }
    else if(years>=2 && years<4)
    incr=5;
    else if(years>=4 && years<6)
    incr=8;
    else if(years>=6)
    incr=10;
    if(incr!=1)
    cout<<"Increment is: "<<incr<<"%";
    sal=salary(incr);
  cout<<"\nSalary: "<<sal;
  }
public:
  void getdata()
  {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"\nEnter work experiance(years): ";
    cin>>years;
    cout<<"\nEnter Salary: ";
    cin>>sal;
  }
  void display()
  {
    cout<<"\nName is: "<<name;
    cout<<"\nYears worked: "<<years<<endl;
    incrment();
  }
};
int main()
{
  employ a;
  a.getdata();
  a.display();
  return 0;
}
