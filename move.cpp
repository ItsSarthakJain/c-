#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  ifstream fin;
  fin.open("movies.txt",ios::in|ios::app);
  char ch[100];
  int i;
  ofstream fout;
  fout.open("newMovies.txt",ios::out);
  while(fin)
  {
    fin>>ch;
    i=strlen(ch);
    while(i)
    {
      if(isalpha(ch[i]))
      fout<<ch[i];
      else if(ch[i]==' ')
      fout<<"_";
      else if(ch[i]=='('&&ch[i]=='1')
      i+=5;
      i++;
    }
    fout<<endl;
  }
  return 0;
}
