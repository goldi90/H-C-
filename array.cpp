#include<iostream>
using namespace std;

int main(){
    /**********************************************Array***********************************************/
    int marks[] ={25,45,12,47};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


/*you can chnge the value of array*/
    // int marks[] ={25,45,12,47};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2]=100;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


/*********************************************Array with loops*************************************/
// for (int i = 0; i < 4; i++)
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
// }

/*Quiz : do the same using do while loop or while loops*/
   
/*********************************************Array with Pointers*************************************/
   int* p=marks;
   cout<<"The value of marks[0] is "<<*p<<endl;
   cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
   cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
   cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0; 
}