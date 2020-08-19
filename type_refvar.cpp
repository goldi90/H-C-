# include<iostream>
using namespace std;
int k=91;

int main()
 {
     /***************************** scope resolution operator*****************************/ 
//     int num1, num2;
    
//     cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion operator */
//     cin>>num1; /* '>>' is called Extraction operator */
    
//     cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion operator */
//     cin>>num2; /* '>>' is called Extraction operator */
   
//    int k= num1+num2;

//     cout<<"The sum is "<<k<<endl;
//    cout<<"the value of k is "<<::k;

/********************************* Literals(f) float and (l) long *******************************************/
// float d=34.4f;
// long double e=34.4l;
// cout <<"the vlaue of d is "<<d<<endl<<"the value of e is "<<e<<endl;  
// cout<<"the size of d : "<<sizeof(d)<<endl;
// cout<<"the size of e : "<<sizeof(e)<<endl;
// cout<<"the size of d : "<<sizeof(3.4f)<<endl;
// cout<<"the size of d : "<<sizeof('e')<<endl;
// cout<<"the size of d : "<<sizeof(1.2)<<endl;

/********************************* reference varialbe *******************************************/
// amit    -------> vicky  ----->> chintu  
int t=91;
int & y= t;

cout <<"the value of k is "<<t<<endl;
cout <<"the value of k is "<<y <<endl;
/********************************* type casting ************************************************/
// changing one to another data type
int a=45;
float v=45.6;
cout <<"The  value  of a is "<<float (a)<<endl;
cout <<"The  value  of a is "<<(float) a<<endl;
cout <<"The  value  of v is "<<(int) v<<endl;
cout <<"The  value  of v is "<<int (v) <<endl;


cout<<"the expression is " <<a +v<<endl;
cout<<"the expression is " <<a +int(v)<<endl;
cout<<"the expression is " <<a +(int)v<<endl;


return 0;
}

