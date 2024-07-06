#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a,b;
    cout<<"Enter two value of a and b: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"After swapping number of a nad b is "<<a<<" and "<<b;
    return 0;
}