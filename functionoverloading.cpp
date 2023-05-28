#include<iostream>
using namespace std;

void print(){
	cout << "no parameters" << endl;
}

void print(int x){
	cout << "one integer parameters" << x << endl;
}

void print(int x, int y){
	cout << "two integer parameters" << x << "," << y << endl;
}

int main(){
	print();
	print(42);
	print(42,34);
	return 0;
}
