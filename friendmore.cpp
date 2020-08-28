#include<iostream>
using namespace std;

class y;
    class x{
 int  data;
 public:
   void setdat(int value){
       data=value;
   }  
   friend void add(x,y);
};

        class y{
 int  num;
 public:
   void setdat(int value){
       num=value;
   }
      friend void add(x,y);
};



void add(x o1 , y o2){
cout<<"Suming the data of X and Y object give me  "<<o1.data + o2.num;
}
 int main(){
 x ot;
 ot.setdat(2);
 y to;
 to.setdat(3);
 add(ot,to);
   return 0; 
}
