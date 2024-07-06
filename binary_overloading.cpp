#include<iostream>
using namespace std;
class binary{
    private:
    int x;
    public:
    int getdata(int a){
        x=a;
    }
    binary operator+(binary b){
        binary c;
        c.x=x+b.x;
        return c;
    }
    display(){
        cout<<"Your sum is :"<<x;
    }
};
int main(){
    binary p,q,r;
    p.getdata(45);
    q.getdata(55);
    r=p+q;
    r.display();
    return 0;
}