#include <iostream>
using namespace std;
class A{
   string grade;
 int year;
 string color;
public :
A(){
  cin>>year>>color>>grade;
}
// void getValues(string name,int year,string color){

// }
void printValues(){
cout<<year<<endl<<color<<endl<<grade<<endl;
}
void checkValues(){
   if(year<2000){
    cout<<"D";
   }else if(year>=2000 && year<=2009){
     cout<<"C";
   }else if(year>=2010 && year<=2019){
    cout<<"B";
  }else if(year>=2020 && year<=2023){
    cout<<"A";
  }else{
    cout<<"outstanding machine";
  }
}
};
int main(){
   A ob1;
   ob1.printValues();
   ob1.checkValues();
return 0;
}
