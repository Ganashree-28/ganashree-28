#include<iostream>
#include<string>
using namespace std;

class MyString{
	private:
		string data;
		
	public:
		MyString():data("") {}
		MyString(const string& str) : data(str) {}
		
	MyString operator+(const MyString& other){
		MyString result;
		result.data=data + other.data;
		return result;
	}
	
	void display(){
	cout << data << endl;
	}
};

int main(){
	MyString str1("Hello");
	MyString str2("World");
	MyString str3=str1 + str2;
	str3.display();
	return 0;	
}

