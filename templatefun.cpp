#include <iostream>
using namespace std;

// Template function to add two numbers
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Adding integers
    int x = 10, y = 20;
    cout << "Sum of integers: " << add(x, y) << endl;

    // Adding floating-point numbers
    float p = 5.5, q = 3.3;
    cout << "Sum of floats: " << add(p, q) << endl;

    // Adding doubles
    double m = 1.123, n = 2.456;
    cout << "Sum of doubles: " << add(m, n) << endl;

    return 0;
}
