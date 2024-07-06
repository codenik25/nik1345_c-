#include<iostream>
using namespace std;
class student{
private:
int roll;
string name;
public:
student(){
    roll=1345;
    name="niknj";
    
}
friend void display(student obj);
};
void display(student obj){
    cout<<obj.roll<<" "<<obj.name;
}
int main(){
    student st;
    display(st);
    return 0;
}
