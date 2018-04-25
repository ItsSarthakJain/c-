#include<iostream>
using namespace std;
class Student{
protected:
    int rno;
public:
    void get_rno(){
      cin>>rno;
    }
    void put_rno(){
      cout<<"Roll no= "<<rno<<endl;
    }
};
class Test:public virtual Student{
protected:
    int m1,m2;
public:
    void get_m(){
      cin>>m1>>m2;
    }
    void put_m(){
      cout<<"Marks are "<<m1<<" "<<m2<<endl;
    }
};
class Sports:virtual public Student{
protected:
    int s;
public:
    void get_s(){
      cin>>s;
    }
    void put_s(){
      cout<<"Score is "<<s<<endl;
    }
};
class Result:public Test,public Sports{
protected:
    int total;
public:
    void calc(){
      total=m1+m2+s;
      if(total>=100)
        total=100;
    }
    void display(){
      put_rno();
      put_m();
      put_s();
      cout<<"Total is "<<total<<endl;
    }
};
int main(){
Result r;
r.get_rno();
r.get_m();
r.get_s();
r.calc();
r.display();
return 0;
}
