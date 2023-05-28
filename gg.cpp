#include <iostream>
using namespace std;

// Base class
class Food {
   protected:
      string name;
   public:
      Food(string n) {
         name = n;
      }
      void display() {
         cout << "Name of the food: " << name << endl;
      }
};

// Derived class from Food
class Cuisine: public Food {
   protected:
      string type;
   public:
      Cuisine(string n, string t) : Food(n) {
         type = t;
      }
      void display() {
         cout << "Name of the cuisine: " << name << endl;
         cout << "Type of the cuisine: " << type << endl;
      }
};

// Derived class from Cuisine
class Dish: public Cuisine {
   private:
      int price;
   public:
      Dish(string n, string t, int p) : Cuisine(n, t) {
         price = p;
      }
      void display() {
         cout << "Name of the dish: " << name << endl;
         cout << "Type of the cuisine: " << type << endl;
         cout << "Price of the dish: " << price << endl;
      }
};

// main function
int main() {
   // Creating object of Dish
   Dish d("Biryani", "Indian", 200);

   // Accessing the display function of Dish
   d.display();

   // Accessing the display function of Cuisine
   d.Cuisine::display();

   // Accessing the display function of Food
   d.Food::display();

   return 0;
}


