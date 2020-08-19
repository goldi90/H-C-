#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 int age;
cout<<"Enter your age: ";
cin>>age;

 /********************************** selection control structure if else ladder********************************/
// if (age<18)
// {
//     cout<<" you can`t drink";
// }
// else if (age<30)
// {
//     cout<<"Lets drink bro";
// }
// else if (age<=50)
// {
//     cout<<"not advices to drink";
// }

// else
// {
//     cout<<"ek pair kabar mai or tu chala pine ??";
// }
 /********************************** selection control structure switch case********************************/



switch (age)
{
case 17:
 cout <<"you can`t drink"<<endl;
    break;
case 18:
 cout <<"you can drink"<<endl; 
    break;
case 50:
 cout <<"you not adviced drink"<<endl;
    break;

default:
    cout <<"not adviced "<<endl;
    break;
}

    return 0;
}