#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"Sum of 5 and 3 is "<<add(5,3)<<endl;;
    cout<<"Sum of 5,3,2 is "<<add(5,3,2);
    return 0;
}