#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Cannot divide by zero!");
    }
    return a / b;
}

int main() {
    try {
        double result = divide(10, 0); // Change denominator to test
        cout << "Result: " << result << endl;
    } catch (runtime_error& e) {
        cout << "Exception: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
