#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Constructor is executed";
    }
    ~Base(){
        cout<<"Destructor is executed";
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Constructor is executed";
    }
    ~Derived(){
        cout<<"Destructor is executed";
    }
};

int main(){
    Derived d;
    return 0;
}