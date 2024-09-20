#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int main (){
    string s1="vansh is here";
    stringstream obj(s1);
    string s2;
    while(obj>>s2)
    {
        cout<<s2<<endl;
    }
    return 0; 
}