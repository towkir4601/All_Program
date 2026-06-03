#include <iostream>
#include <math.h>
using namespace std;
class calculator
{
private:
    int a, b, c;

public:
    void add();
    void sub();
    void mul();
    void div();
    void display();
};
void calculator::add()
{
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    c = a + b;
    // cout<<"The answer is:"<<c<<endl;
}
void calculator::sub()
{
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    c = a - b;
    // cout<<"The answer is:"<<c<<endl;
}
void calculator::mul()
{
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    c = a * b;
    //cout<<"The answer is:"<<c<<endl;
}
void calculator::div()
{
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    c = a / b;
    // cout<<"The answer is:"<<c<<endl;
}
void calculator::display()
{
    cout << "The answer is:" << c << endl;
}

class Scientific_Calculator
{
private:
    int a, b, c, angle;

public:
    int k;
    void display();
    void Trigonometric();
    void Logarithmic();
    void power();
};
void Scientific_Calculator ::Trigonometric()
{
    cout << "Press 1 for sin A" << endl;
    cout << "Press 2 for cos A" << endl;
    cout << "Press 3 for tan A" << endl;
    cout << "Press 4 for cosec A" << endl;
    cout << "Press 5 for sec A" << endl;
    cout << "Press 6 for cot A" << endl;
    cin >> k;
    cout << "Enter the angle(A)" << endl;
    cin >> angle;
    switch (k)
    {
    case 1:
        cout << "Sin A =" << sin(angle * 3.14159 / 180);
        break;
    case 2:
        cout << "cos A =" << cos(angle * 3.14159 / 180);
        break;
    case 3:
        cout << "tan A =" << tan(angle * 3.14159 / 180);
        break;
    case 4:
        cout << "cosec A =" << 1 / sin(angle * 3.14159 / 180);
        break;
    case 5:
        cout << "Sec A =" << 1 / cos(angle * 3.14159 / 180);
        break;
    case 6:
        cout << "cot A =" << 1 / tan(angle * 3.14159 / 180);
        break;

    default:
        cout << "Your choice is Wrong........" << endl;
        break;
    }
}
void Scientific_Calculator::Logarithmic()
{
    cout << "Enter the number whose log is be find" << endl;
    cin >> a;
    cout << "log(" << a << ")=" << log(a);
}
void Scientific_Calculator::power()
{
    cout << "Enter the Base" << endl;
    cin >> a;
    cout << "Enter the power" << endl;
    cin >> b;
    cout << a << "^" << b << "=" << pow(a, b);
}
class hybrid_calculator : public calculator, public Scientific_Calculator
{
    
};

int main()
{
    Scientific_Calculator si;
    calculator cal;
    int s;
    cout << "Press 1 for addition:" << endl;
    cout << "Press 2 for subtrection:" << endl;
    cout << "Press 3 for multiplication:" << endl;
    cout << "press 4 for division:" << endl;
    cout << "Press 5 for logarithm" << endl;
    cout << "Press 6 for trigonometric" << endl;
    cin >> s;
    switch (s)
    {
    case 1:
        cal.add();
        cal.display();
        break;
    case 2:
        cal.sub();
        cal.display();
        break;
    case 3:
        cal.mul();
        cal.display();
        break;
    case 4:
        cal.div();
        cal.display();
        break;
    case 5:

        si.Logarithmic();

        break;
    case 6:
        si.Trigonometric();

        break;
    default:
        cout << "Your choice is wrong..." << endl;
        break;
    }  
    return 0;
}