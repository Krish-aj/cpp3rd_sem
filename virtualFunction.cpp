#include <iostream>
using namespace std;

class base1{
  
    public:
     virtual void input(){
        cout<<"base1"<<endl;
    }
};

class derived : public base1{
    public:
    void input(){
        cout<<"in derived"<<endl;
        
    }
};
int main(){
    derived d;
    base1 *ptr;
    ptr=&d;
    ptr->input();
    return 0;
}
