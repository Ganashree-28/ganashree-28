#include<iostream>
using namespace std;

class Food{
	protected:
		string name;
	public:
		Food(string n){
			name=n;
		}
		
		void display(){
			cout << "name of the food is:" << name <<endl;
		}
};

class Cuisine : public Food{
	protected:
		string type;
	public:
		Cuisine(string n,string t):Food(n){
			type = t;
		}
		
		void display(){
			cout << "name of the cuisine is:" << name << endl;
			cout << "type of the cuisine is:" << type << endl;
		}
};

class Dish:public Cuisine{
	private:
		int price;
	public:
		Dish(string n,string t,int p):Cuisine(n,t) {
			price=p;
		}
		
		void display(){
			cout << "name of the Dish is:" << name <<endl;
			cout << "type of the Dish is:" << type <<endl;
			cout << "Price of the Dish is:" << price <<endl;
		}
};

int main(){
	Dish d("Biriyani","Indian",200);
	
	d.display();
	d.Cuisine::display();
	d.Food::display();
	return 0;
}
