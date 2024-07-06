#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        cout<<endl;
    }
    return 0;
}