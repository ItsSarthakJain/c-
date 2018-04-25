#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
  string s1="hello baby";
  string s2="fuck";
if (s1.find(s2) != std::string::npos)
    std::cout << "found!" << '\n';
    return 0;
}
