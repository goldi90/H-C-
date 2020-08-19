#include<iostream>
using namespace std;

int main(){
    /******************************************pointer **************************************/
// what is pointer ------------> pointer isa data type which hold the address of other datatype

// & -------> Address of operator
int k=41;
int* t= &k;
cout<<"address of k is "<<t<<endl;
cout<<"address of k is "<<&k<<endl;
// * -------> Dereference operator ( to find the value at address)   
 cout<<"The value at address of k is "<<*t<<endl;
// pointer to pinter
int** c= &t;
cout<<"the adresss of t is "<<&t <<endl;
cout<<"the adresss of t is "<<c<<endl;
cout<<"the value of c is "<<*c <<endl;
cout<<"the value of c is "<<**c <<endl;

    return 0;
}