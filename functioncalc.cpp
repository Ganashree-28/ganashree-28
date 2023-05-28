#include<iostream>
using namespace std;

class calculator{
	public:
		
		int add(int a,int b){
			cout << "addition of intergers" << a+b << endl;
		}
		
		double add(double a,double b){
			cout << "addition of double values" << a + b << endl;
		}
		
		int multiplication(int a,int b,int c){
			cout << "multiplication of three parametrs" << a*b*c << endl;
		}
		
		int division(int a,int b){
			cout << "division" << a/b << endl;
		}
};

int main(){
	calculator calc;
	cout << calc.add(2,4) << endl;
	cout << calc.add(3.14,5.47) << endl;
	cout << calc.multiplication(2,3,4) << endl;
	cout << calc.division(4,2) << endl;
	return 0;
}

