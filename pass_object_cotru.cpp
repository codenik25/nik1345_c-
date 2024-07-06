#include<iostream>
using namespace std;
class object{
    public:
    object(int x){
        cout<<"Constructor called "<<x<<endl;
    }
};
class another{
    object obj;
    public:
    another():obj(5){}
};
int main(){
    another aobj;
    return 0;
}