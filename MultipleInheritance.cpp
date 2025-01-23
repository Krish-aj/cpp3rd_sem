#include <iostream>
using namespace std;

class base1{
  
    public:
    void input(){
        cout<<"base1"<<endl;
    }
};
class base2{
    public:
    void add(){
     cout<<"base2"<<endl;    
    
    }
};
class derived : public base1,public base2{
    public:
    void eval(){
        input();
        add();
    }
};
int main(){
    derived d;
    d.eval();
    return 0;
}
