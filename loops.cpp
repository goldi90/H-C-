# include <iostream>
using namespace std;
 int main(){
  
  /* loops in c++
    there are three type of loops in c++ :
    1.for loop
    2.while loop  
    3.do-while loop  
    */
/*****************************************************for loop in c *********************************************/

 // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }


// for (int i = 1; i <=100; i++)
// {
//     cout<<"the number is "<<i<<endl;
// }
// Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }




/*****************************************************while loop in c *********************************************/
 // while lop santex
 /* 
 while(condition)
 {
     code of c+++
 }
  print 1 to 40 using while loop 
 
 */
// int k=1;
// while(k<=40){
// cout<<k<<endl;
//     k++;
// }


// Example of infinite while loop
//    int i= 1;
//    while(true){
//        cout<<i;
//        i++;

//    }

/*****************************************************do-while loop in c *********************************************/

int k=1;
do {
cout<<k<<endl;
    k++;
}while(k<=40);

     return 0;
 }