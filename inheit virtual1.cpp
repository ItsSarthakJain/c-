#include<iostream>
using namespace std;
class A{
protected:
  int i;
public:
  void get_i(){
    cin>>i;
  }
  void put_i(){
    cout<<"i= "<<i<<endl;
  }
};
class B:virtual public A{
protected:
  int j;
public:
  void get_j(){
    cin>>j;
  }
  void put_j(){
    cout<<"j= "<<j<<endl;
  }
};
class C:public virtual A{
protected:
  int k;
public:
  void get_k(){
    cin>>k;
  }
  void put_k(){
    cout<<"k= "<<k<<endl;
  }
};
class D:public B,public C{
protected:
    int l;
public:
    void get_l(){
      cin>>l;
    }
    void put_l(){
      cout<<"l= "<<l<<endl;
    }
    void display(){
      put_i();
      put_j();
      put_k();
      put_l();
    }
};
int main(){
  D obj;
  obj.get_i();
  obj.get_j();
  obj.get_k();
  obj.get_l();
  obj.display();
  return 0;
}
