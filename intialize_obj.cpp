#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    int salary;
    employee(int a,string b,int c){
        id=a;
        name=b;
        salary=c;
    }
};
int main(){
    int id,salary;
    string name;
    cout<<"Type details";
    cin>>id;
    cin>>name;
    cin>>salary;
    employee e1(id,name,salary);
    cout<<e1.id<<e1.name<<e1.salary;
    return 0;
}