#include<iostream>
using namespace std;
void print(int x)
{
	cout<<"integer :"<<x<<endl;
}
void print(float x)
{
	cout<<"floating :"<<x<<endl;
}
int main()
{
	print(2);
	print(5.2f);
	return 0;
}
