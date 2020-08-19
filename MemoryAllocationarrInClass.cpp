#include<iostream>
using namespace std;

class Shop{
    int Item_price[100];
    int Item_id[100];
    int counter;
    public:
    void  Init(void){counter=0;}
    void Set_Item_details(void);
    void Display_Item_details(void);
};
void Shop ::Set_Item_details(void){
    cout<<"Enter Your Product id"<<endl;
    cin>>Item_id[counter];
    cout<<"Enter Your Product Price"<<endl;
    cin>>Item_price[counter];
    counter++;
}
void Shop ::Display_Item_details(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The id of product is "<<Item_id[i]<<" and the price is "<<Item_price[i]<<endl;
    }
    
}
int main(){
    Shop dukkan;
    dukkan.Init();
    dukkan.Set_Item_details();
    dukkan.Display_Item_details();
    return 0;
}