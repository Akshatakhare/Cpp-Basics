// Q12. Write a Program to Make a Simple Calculator.

// Enter the Number: 10    25
// Enter a for addition,
// s for substraction,
// m for multiplication,
// d for division.

// {{if m is entered}}

// Output:  250
#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
 
    // It allows user to enter operator
    // i.e. +, -, *, /
    cin >> op;
 
    // It allow user to enter the operands
    cin >> num1 >> num2;
 
    // Switch statement begins
    switch (op) {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
 
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
 
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
 
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
 
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    }
    // switch statement ends
 
    return 0;
}
