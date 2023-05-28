#include<iostream>
using namespace std;
class Animal{
	public: 
	void MySound(){
		cout<<"animal make sound"<<endl;
	}
};
class Dog:public Animal{
public:
void MySound(){
	cout<<"dog boww"<<endl;
}
};
class Cat:public Animal{
	public:
	void MySound(){
		cout<<"cat meoww"<<endl;
	}
};
int main()
{
	Dog dog;
	Cat cat;
	dog.MySound();
	cat.MySound();
    dog.Animal::MySound();
	cat.Animal::MySound();
	return 0;
}
