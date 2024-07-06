#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi=3.14159265;
    int width=10;
    cout<<setw(width)<<"Pi:"<<pi<<endl;
    cout<<"pi with precision 4"<<setprecision(4)<<pi<<endl;
    cout<<"pi with fixed notation:"<<fixed<<pi<<endl;
    return 0;
}
