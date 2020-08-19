 # include <iostream>
 using namespace std;
 class employee{
 int id;
 int salary;
 public:
 void getdata(void);
 void setdata(void){
      cout<<"Enter the id of employee"<<endl;
      cin>>id; 
 }
 };
 void employee::getdata(void){
     cout<<"The id of employee is"<<id<<endl;
 }
 int main(){
 employee kd[3];
 for (int i = 0; i < 3; i++)
 {
     kd[i].setdata();
     kd[i].getdata();
 }
 
 }