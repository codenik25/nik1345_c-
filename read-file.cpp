#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream inputFile("input.txt");
    if(!inputFile.is_open()){
    cerr<<"Error opening the file!"<<endl;
    return 1;
    }
    string line;
    cout<<"File Content:"<<endl;
    while(getline(inputFile,line)){
        cout<<line<<endl;
    }
    inputFile.close();
    return 0;
}