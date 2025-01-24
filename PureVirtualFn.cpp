#include <iostream>
using namespace std;

// Abstract base class with a pure virtual function
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;  // No implementation in base class

    // Destructor
    virtual ~Animal() {}
};

// Derived class Dog that implements the pure virtual function
class Dog : public Animal {
public:
    void sound()  {
        cout << "Dog barks!" << endl;
    }
};

// Derived class Cat that implements the pure virtual function
class Cat : public Animal {
public:
    void sound()  {
        cout << "Cat meows!" << endl;
    }
};

int main() {
    // Creating objects of the derived classes Dog and Cat directly
    Animal *ptr;
    Dog dog;
    Cat cat;
    ptr=&dog;
    ptr->sound();
    
    ptr=&cat;
    ptr->sound();

 

    return 0;
}
