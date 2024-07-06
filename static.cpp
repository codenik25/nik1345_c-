#include<iostream>
using namespace std;
int func(){
    static int n=0;
    cout<<" "<<n;
    n++;
}
int main(){
    int i,j;
    cout<<"Enter the number: ";
    cin>>j;
     for(i=0;i<j;i++){
        func();
     }
     return 0;
}