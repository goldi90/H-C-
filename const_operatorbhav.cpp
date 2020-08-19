#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     int t=3;
cout<<"the value of a was "<<t<<endl;
t=91;
cout<<"the value of a was "<<t<<endl;
   
/********************************constant variable**********************************/
// const int a=3;
// cout<<"the value of a was"<<a<<endl;
// a=91;  //you will get an error because a is constant
// cout<<"the value of a was"<<a<<endl;
/*********************************** manipulator ***********************************/
// int w=3,q=78,e=4412;
// cout<<" the value o f w is :"<<setw(4)<<w<<endl;
// cout<<" the value o f q is :"<<setw(4)<<q<<endl;
// cout<<" the value o f e is :"<<setw(4)<<e<<endl;
// cout<<" the value o f w without setw is :"<<w<<endl;
// cout<<" the value o f q without setw is :"<<q<<endl;
// cout<<" the value o f e without setw is :"<<e<<endl;
   
   /*******************************operator presedence ******************************/
     int a=3,b=4;  /*https://en.cppreference.com/w/cpp/language/operator_precedence*/
    int c= (a*5)+b;// if the operator presedence is same go for associativity
    cout<<c;
    return 0;
}