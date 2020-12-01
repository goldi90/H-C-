#include<iostream>
using namespace std;
class complex{
int a,b;
public:
 void Setnumber(int n1 , int n2){
     a=n1;
     b= n2;
 }
 // declaration of  SumComplex as a friend s
 friend complex SumComplex (complex o1, complex o2);
 
 void GetNumber(){
     cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
 }
};
complex SumComplex(complex o1,complex o2){
    complex o3;
    o3.Setnumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;

}
int main(){
    complex c1,c2,sum ;
    c1.Setnumber(1,4);
    c1.GetNumber();

    c2.Setnumber(5,8);
    c2.GetNumber();

    sum= SumComplex(c1,c2);
    sum.GetNumber();
    return 0;
}