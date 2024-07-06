#include<iostream>
using namespace std;
class Animal{
    public:
    void eats(){
        cout<<"Animal is eating ";
    } 
};
class dogs{
    public:
    void power(){
    cout<<"having strong smell ability";
    }
};
class leapord:public dogs,public Animal{
    public:
    void color(){
        cout<<"Brown";
    }
};
int main(){
    leapord ld;
    ld.eats();
    ld.power();
    ld.color();
    return 0;
}