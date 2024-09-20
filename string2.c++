#include <iostream>
#include <cmath>
using namespace std;

int main (){
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    s3=s1+s2; //or u can use s3=s1.append(s2); means a .append operator;
    cout<<"output\n"<<s3<<endl;
    return 0;
}