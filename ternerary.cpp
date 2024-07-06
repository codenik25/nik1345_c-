#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the marks:";
    cin>>i;
    string result=(i>=40)?"passed":"failed";
    string post=(i>=75)?"you are eligible for next exam":"you are not eligible for next exam";
    cout<<"Your result is "<<result<<" and your post is "<<post;
    return 0;
    
}