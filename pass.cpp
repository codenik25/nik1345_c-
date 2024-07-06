#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"Enter the value of x and y";
    cin>>x>>y;
    int result=sum(x,y);
    cout<<"Sum of two number is:"<<result;
    return 0;
}