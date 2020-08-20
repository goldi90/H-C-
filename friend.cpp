#include<iostream>
using namespace std;
class complex{
int a,b;
public:
 void Setnumber(int n1 , int n2){
     a=n1;
     b= n2;
 }
 void GetNumber(){
     cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
 }
};
complex SumComplex(complex o1,complex o2){
    
}
int main(){
    complex c1,c2;
    c1.Setnumber(1,4);
    c2.Setnumber(5,8);
    c1.GetNumber();
    c2.GetNumber();

    
    return 0;
}