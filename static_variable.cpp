#include<iostream>
using namespace std;
class staticVB{
    private:
    static int count;
    public:
    staticVB(){
        count++;
    }
    static void displayCount(){
        cout<<"Count :"<<count<<endl;
    }
};
int staticVB::count=0;
int main(){

            staticVB obj1,obj2,obj3;
            staticVB::displayCount();
            return 0;
}