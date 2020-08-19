#include <iostream>
using namespace std;
class Employee
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter your id number " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of Employee is " << id << " And This is employee number " << count << endl;
    }
    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count = 100;// Default value is 0
int main()
{
    Employee kaushik;
    // kaushik.id=1;
    // kaushik.count=1; id and count are private
    kaushik.setData();
    kaushik.getData();
    Employee::getCount();
    //other object
    Employee harsh;
    harsh.setData();
    harsh.getData();
    Employee::getCount();
    //other object
    Employee vicky;
    vicky.setData();
    vicky.getData();
    Employee::getCount();
    return 0;
}