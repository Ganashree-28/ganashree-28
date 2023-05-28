#include<iostream>
using namespace std;
class calculus
{
	int n1,n2;
	public:
	void add()
	{
		cout<<"enter the values"<<endl;
		cin>>n1>>n2;
		cout<<"add is:"<<n1+n2<<endl;
	}
	void sub()
	{
		cout<<"enter values"<<endl;
		cin>>n1>>n2;
		cout<<"sub is:"<<n1-n2<<endl;
	}
};
int main()
{
	calculus obj;
	obj.add();
	obj.sub();
	return 0;
}
