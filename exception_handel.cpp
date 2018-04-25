#include<iostream>
using namespace std;
int main()
{
	int num,den;
	cin>>num>>den;
		if(den==0)
		throw(den);
		try{
		if(den<0)
		throw (float)den;
		else if(num==0)
		throw ("NUMIRATOR ZERO");
		else if(num<0)
		throw (double)den;
	 }
	catch(int n)
	{
		int a;
		cin>>a;
		cout<<"Division by 0 exception\n";
		return 0;
	}
	catch(float n)
	{

		cout<<"denominator less than 0 exception\n";
		return 0;
	}
	catch(const char* n)
	{
		cout<<"Numinator is 0 exception\n";
		return 0;
	}
	catch(...)
	{
		cout<<"unknown exception\n";
		return 0;
	}

	cout<<"result is "<<num/den;
}
