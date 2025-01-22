#include <iostream>
#include <string.h>
using namespace std;

class stri{
    
    int s;
    public:
    friend void accept(stri *);
    friend void display(stri *);
    
};
void accept(stri *s1){
    cin>>s1->s;
}
void display(stri *s1){
    cout<<s1->s;
}
int main(){
    stri s2;
    accept(&s2);
    display(&s2);
    return 0;
}
