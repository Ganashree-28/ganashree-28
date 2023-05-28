#include<iostream>
using namespace std;
class Calculator
{
	public:
		int add(int a,int b)
		{
			cout<<"addition :";
			return a+b;
		}
		double add(double a,double b)
		{
			cout<<"double add :";
			return a + b;
		}
		int multiply(int a,int b)
		{
			cout<<"multi :";
			return a * b;
		}
		int divide(int a,int b)
		{
			cout<<"divisble : ";
			return a / b;
		}
		int divided(int a)
		{
			cout<<"divisible by 2 :"<<a / 2<<endl;
		}
	};
	int main()
	{
	Calculator calc;
	cout<<calc.add(2,4)<<endl;
	cout<<calc.add(3.5,2.4)<<endl;
	cout<<calc.multiply(2,4)<<endl;
	cout<<calc.divide(4,2)<<endl;
	cout<<calc.divided(2)<<endl;
	return 0;
}
