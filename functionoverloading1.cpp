#include<iostream>
using namespace std;
 
void print(int x){
	cout << "one parameter" << x << endl;
}

void print(float y){
	cout << "one parameter" << y << endl;
}

int main(){
	print(42);
	print(3.14f);
	return 0;
}
