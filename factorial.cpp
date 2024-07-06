#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0||a==1)
        return 1;
        return a*factorial(a-1);
    
}
int main(){
    int num=5;
    cout<<"Factorial of "<<num<<"is "<<factorial(num)<<endl;
    return 0;
}