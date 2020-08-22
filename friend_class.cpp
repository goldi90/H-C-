#include <iostream>
using namespace std;
// froward decelaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int SumRealComplex(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator ::SumRealComplex(complex o1, complex o2);

public:
    void Setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::SumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex o1, o2;
    o1.Setnumber(1, 4);

    o2.Setnumber(5, 7);

    calculator calc;
    int result = calc.SumRealComplex(o1, o2);
    cout << "The sm of real part of o1 nd o2 is " << result << endl;
    return 0;
}
