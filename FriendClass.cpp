#include <iostream>
using namespace std;

class A{
    int a=10,b=20;
    public:
    friend class B;
};

class B{
    public:
    void add(A ref){
        int sum=ref.a+ref.b;
        cout<<sum;
    }
};

int main(){
    A obj1;
    B obj2;
    
    obj2.add(obj1);
    return 0;
}
