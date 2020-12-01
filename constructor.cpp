#include<iostream>
using namespace std;

class complex{
    int a,b;
public:
// Creating a Constructor
// Constructor is a special member function with the same name as of the class.
//It is used to initialize the objects of its class
//It is automatically invoked whenever an object is created
complex(void); //Constructor declaration

void printnum(){
    cout<<"your number is "<<a<<"and" <<b<<endl;
}

};

complex::complex(void){
    a=10;
    b=0;
}
 int main(){
     complex c;
     c.printnum();

   return 0; 
}
