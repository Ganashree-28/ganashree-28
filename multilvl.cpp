#include<iostream>>
using namespace std;
class Food{
	protected:
		string name;
		public:
			Food(string n){
				name =n;
			}
			void display(){
				cout<<"name food:"<<name<<endl;
			}
		};
		class Hotel : public Food{
			public:
				string type;
				public:
					Hotel(string n,string t) : Food(n){
						type=t;
					}
					void display(){
						cout<<"name :"<<name<<endl;
						cout<<"type :"<<type<<endl;
					}
		};
		class Dish : public Hotel{
			public:
				int price;
				public:
					Dish(string n,string t,int p) : Hotel(n,t){
						price=p;
					}
					void display(){
						cout<<"name ::"<<name<<endl;
						cout<<"type ::"<<type<<endl;
						cout<<"size ::"<<price<<endl;
					}
		};
		int main(){
			Dish d("noodles","karnataka",10);
			d.display();
			d.Hotel::display();
			d.Food::display();
			return 0;
			
		}
