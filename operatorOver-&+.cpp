#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}

    // Overloading the + operator
    Number operator-( Number& obj) {
        return Number(value - obj.value); // Add values and return a new Number
    }

    // Function to display the value
    void display()  {
        cout << value << endl;
    }
};

int main() {
    Number num1(10), num2(20); // Create two objects
    Number sum = num1 - num2; // Add using overloaded +

    cout << "Number 1: ";
    num1.display();

    cout << "Number 2: ";
    num2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
