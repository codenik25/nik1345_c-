#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void makesound(){
        cout<<"Animal makes sounds:";
    }
};
class Dog:public Animal{
    public:
    void makesound()override{
        cout<<"Woof!";
    }
};
class Cat:public Animal{
    public:
    void makesound()override{
        cout<<"MEOW";
    }
};
int main(){
    Dog d;
    Cat c;
    Animal *janvar;
   janvar=&d;
    cout<<"Dog sounds lke:";
    janvar->makesound();

    janvar=&c;
    cout<<"Cat sounds like:";
    janvar->makesound();
    return 0;
}