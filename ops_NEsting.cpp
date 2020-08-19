// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;
class Binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void one_compliment(void);
    void Display(void);
};
void Binary ::read(void)
{
    cout << "Enter The Binar number" << endl;
    cin >> s;
}
void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void Binary ::one_compliment(){
    chk_bin();
    for (int i = 0; i <s.length(); i++)
    {
        if (s.at(i)=='0')
        {
        s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
        
        
    }
    
}
void Binary ::Display(){

cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;

}
int main()
{
Binary b;
b.read();
b.Display();
// b.chk_bin();
b.one_compliment();
b.Display();
    return 0;
} 