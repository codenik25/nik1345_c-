#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=0;i<n;i++){
        for(j=0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}