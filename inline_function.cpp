#include<iostream>
using namespace std;
inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
return a*b;
}
float MoneyRecevived(int CurrentMoney, float Factor=1.04){
    return CurrentMoney *Factor;
}
// int strlen(const char *p){

// }
int main(){
    int a,b;
// cout<<"enter the value of a and b "<<endl;
// cin>>a>>b;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
// cout<<"the Product of a and b is "<<product(a,b)<<endl;
int money=1000;
  cout<<" if you have "<<money<<" Rs in back account,You wil received "<<MoneyRecevived(money)<<" after one year"<<endl; 
  cout<<" if you Are VIP and you have "<<money<<" Rs in back account,You wil received "<<MoneyRecevived(money,1.1)<<" after one year"; 
   
    return 0;
} 