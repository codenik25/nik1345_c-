#include<iostream>
using namespace std;
int a,b,c;
void getData(){
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
}
void check(){
    if(a>b&&a>c){
        cout<<"A is greatest among three number";
    }
    if(b>a&&b>c){
        cout<<"B is greatest among three number";
    }
    if(c>a&&c>b){
        cout<<"C is greatest among three number";
    }
}

int main(){
    
    getData();
    check();
    return 0;
    
}