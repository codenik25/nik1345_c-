#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"Constructor is executed";
    }
    ~student(){
        cout<<"Destructor is executed";
    }
};
int main(){
    student std;
    return 0;
}