#include <iostream>

using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int val){
    value=val;
}
    // Declare a friend function
    friend void display(MyNumber& num);
};

// Define the friend function outside the class
void display(MyNumber& num) {
    cout << "Value: " << num.value << endl;
}

int main() {
    MyNumber num(42);
    display(num);  // Calls the friend function to access private member

    return 0;
}


