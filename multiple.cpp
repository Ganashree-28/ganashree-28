#include<iostream>
using namespace std;
class Animal{
	public:
		void speak(){
			cout<<"animal speaks"<<endl;
		}
};
class Mammal{
	public:
		void barks(){
			cout<<"mammal barks"<<endl;
		}
};
class Dog : public Animal,public Mammal{
	public:
		void runs(){
			cout<<"dog runs"<<endl;
		}
};
int main()
{
	Dog dog;
	dog.speak();
	dog.barks();
	dog.runs();
	return 0;
}
