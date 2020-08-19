#include<iostream>
using namespace std;
  
//  typedef struct employee
//     {
//         int eId;
//         char favChar;
//         float salary;
//     }ep;
 union money
    {
        int rice;
        char car;
        float pounds;
    };
     
    

int main(){
  union money m1;
  m1.rice=34;
  // m1.car='c'; union use one value at a time  
 cout<<m1.rice<<endl;

  // ep kaushik;
  // kaushik.eId=1;
  // kaushik.favChar='k';
  // kaushik.salary =1000000.14;
  // cout<<kaushik.salary<<endl;
  // cout<<kaushik.favChar<<endl;
  // cout<<kaushik.eId<<endl;

  // enum
  enum meal{ Breakfast,lunch,diner};
  meal m2 = lunch;
    cout<<(m2==2)<<endl;
  cout<<Breakfast<<endl;
  cout<<lunch<<endl;
  cout<<diner<<endl;
return 0;
   
}