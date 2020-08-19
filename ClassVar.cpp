# include<iostream>
using namespace std;
class employee{
  int id;
  static int count;
  public:
void getdata(void);
 void setdata(void){
   cout<<endl<<"Enter employee id"<<endl;
   cin>>id;
   count++;
  }
  static void getcount(){
    cout<<" The value of count is "<<count<<endl;
}
};
int employee:: count; 

void employee::getdata(void){
  cout<<" The id of employee is "<<id<<" and this is employee number "<<count<<endl;
}
int main(){
  employee kaushik,harsh,abhinesh;
  kaushik.setdata();
  kaushik.getdata();
    employee::getcount();

  harsh.setdata();
  harsh.getdata();
    employee::getcount();

  abhinesh.setdata();
  abhinesh.getdata();
      employee::getcount();
      
}