#include <iostream>
using namespace std;

class Numbers
{
private:
    int a, b;

public:
    void setNumbers(int, int);
    int add() { return a + b; }
    int subtract() { return a - b; }
    int multiply() { return a * b; };
    float divide() { return (a * 1.0) / b; }
};
void Numbers::setNumbers(int num1, int num2)
{
    a = num1;
    b = num2;
}
int main()
{
    Numbers number;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    number.setNumbers(a, b);
    cout << "Addition: " << number.add() << endl;
    cout << "Subtraction: " << number.subtract() << endl;
    cout << "Multiplication: " << number.multiply() << endl;
    cout << "Division: " << number.divide() << endl;

    return 0;
}