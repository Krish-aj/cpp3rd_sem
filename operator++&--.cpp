#include <iostream>
using namespace std;

class wt{
    int kg;
    public:
    wt(int x=0):kg(x){}
    void operator --(){
        --kg;
    }
    void display(){
        cout<<kg<<endl;
    }
};

int main()
{
    wt obj(6);
    obj.display();
    --obj;
    obj.display();
    return 0;
    
}
