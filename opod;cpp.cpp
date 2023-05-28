#include<iostream>
using namespace std;
class MyNumber
{
	public:
		int value;
		MyNumber(int val) : value(val) {}
		MyNumber operator+(const MyNumber& other){
			return MyNumber(value + other.value);
		}
	};
	int main()
	{
	MyNumber num1(2);
	MyNumber num2(4);
	MyNumber sum = num1 + num2;
	cout<<"sum :"<<sum.value<<endl;
	return 0;
}
