#include<iostream>
using namespace std;
class unary{
    private:
    int x;
    public:
    void getdata(int a){
        x=a;
    }
    unary operator++(){
        x=x+5;
        cout<<"Your age is :"<<x;
    }
};
int main(){
    unary ud;
    ud.getdata(5);
    ++ud;
    return 0;
}