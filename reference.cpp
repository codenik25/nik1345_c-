#include<iostream>
using namespace std;
int main(){
    int c=10;
    int&ref=c;
    cout<<ref;
    c=20;
    cout<<ref;
    return 0;
}