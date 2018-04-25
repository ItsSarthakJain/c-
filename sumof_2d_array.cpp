#include<iostream>
using namespace std;

class matrix
{
  int size;
  int **p;
  int **q;
public:
  void get()
  {
    int i,j;
    cout<<"Enter 2d elements\n";
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
    {
    cin>>p[i][j];
    q[i][j]+=p[i][j]
    }
    }
  }
  void put()
  {
    int i,j;
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
    {
    cout<<q[i][j]<<" ";
    }
    cout<<endl;
    }
  }
  matrix()
  {
    cin>>size;
    p=new int*[size];
    q=new int*[size];
    int i,j;
    for(i=0;i<size;i++)
    {
    p[i]=new int[size];
    q[i]=new int [size];
    }
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
    {
    q[i][j]=0;
    }
    }
  }
};
int main()
{
  matrix a;
  a.get();
  a.get();
  a.put();
  return 0;
}
