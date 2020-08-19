/************************************function******************************/
// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//      int c=a+b;
//      return c;

 

// }
// int main(){
//     int num1,num2;
//     cout<<"enter first number"<<endl;
//     cin>>num1;
//     cout<<"enter secounde number"<<endl;
//     cin>>num2;
//     cout<<"The sum of num1 an num2 is "<<sum(num1,num2);
//     return 0;
// }
/************************************function prototype******************************/
//Syntax: type function-name(arguments)
#include<iostream>
using namespace std;
// int sum(int a,int b);//--> Acceptable (function prototype)
int sum(int,int); //--> Acceptable /*(function prototype) */
// int sum(inta,b); //--> Not Acceptable
void g();//--> Acceptable
int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter secounde number"<<endl;
    cin>>num2;
    //num1 and num2 are aactual Parameters
    cout<<"The sum of num1 an num2 is "<<sum(num1,num2);
     g(); 
    return 0;
}

int sum(int a,int b){
    // Formal Parameter a and b will be taking value from actual parameter num1 and num2
     int c=a+b;
     return c; 
}

void g(){
    cout<<"\nhello, Kaushik";
}