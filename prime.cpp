#include<iostream>
using namespace std;
int main(){
    int i,n;
    bool prime=true;
    cout<<"Enter the value :";
    cin>>n;
    if(n==0||n==1){
        prime=false;
    }
    for(i=2;i<=n/2;++i){
        if(n % i==0){
            prime=false;
            break;
        }
    }
    if(prime){
        cout<<"Given number is prime";
    }
    else{
        cout<<"Given number is not a prime";
        
    }
    return 0;
}