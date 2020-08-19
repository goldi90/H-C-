#include<iostream>
using namespace std;

int fib(int n){
if (n<2)
{
    return 1;
}
return fib(n-2) + fib(n-1);


}

int factoial(int n){
    if(n<=1){
         return 1;
    }
 return n* factoial(n-1);

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;
}
int main(){
    //Factorial of number
    // 6!= 6*5*4*3*2*1==720;
    //0!= 1By Definition
    //1!= 1 By Definition
int a;
cout<<"Enter the number"<<endl;
cin>>a;
// cout<<"The factorial of "<<a<<" is "<<factoial(a)<<endl;

cout<<"The Term in fibonacci sequence at Position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}