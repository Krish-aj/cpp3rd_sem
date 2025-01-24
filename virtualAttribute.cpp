#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override { // No need to write 'virtual' here, but it's inherited
        cout << "Derived1 class show()" << endl;
    }
};

class Derived2 : public Derived1 {
public:
    void show() override { // Virtual attribute is inherited here as well
        cout << "Derived2 class show()" << endl;
    }
};

int main() {
    Base* ptr;

    Derived1 d1;
    Derived2 d2;

    ptr = &d1;
    ptr->show(); // Output: Derived1 class show()

    ptr = &d2;
    ptr->show(); // Output: Derived2 class show()

    return 0;
}
