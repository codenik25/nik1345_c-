#include<iostream>
using namespace std;
class Animal{
    public:
    void eats(){
        cout<<"Animal is eating";
    }
};
class Dog:public Animal{
    public:
    void color(){
        cout<<"Dogs having brown color";
    }
};
int main(){
    Dog n;
    n.eats();
    n.color();
    return 0;
}
