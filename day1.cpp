#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    // Q1. Write a Program to Print “Hello World” in the Console Screen.

    // cout << "Hello World";
    //

    // Q2. Write a Program to Read and Print Number Input From the User.
    // int a;
    // cout << "Enter any Number: ";
    // cin >> a;

    // Q3. Write a Program to Print the ASCII Value of a Character.

    // char d;
    // cout<<"Enter the charcter : ";
    // cin>> d;
    // cout << "the value of " <<  d  << " is " << int(d);

    // for all alphabets:

    // char x;
    // cout<<"THe character are:"<< x <<endl;
    // for ( x = 'A' ; x <= 'Z'; x++ )
    // {
    //     cout<< x <<" is "<< int(x) << endl;
    // }

    // char c;
    // cout << "Character\tASCII Value\n";
    // for(c = 'A'; c <= 'Z'; c++)
    // {
    //     cout << c << "\t\t" << int(c) << endl;
    // }

    // Q4. Write a Program to Find the Size of int, float, double, and char.

    // int a;
    // float b;
    // double c;
    // char d;
    //  cout<<"The size of int is : " <<sizeof(a)<<endl;
    //  cout<<"The size of float is : " << sizeof(b)<<endl;
    //  cout<<"The size of double is : " << sizeof(c)<<endl;
    //  cout<<"The size of char is : " <<sizeof(d) <<endl;

    // Q5. Write a Program to Find Compound Interest.

    double P;
    cout << "Principal : ";
    cin >> P;

    double R;
    cout << "ROI : ";
    cin >> R;

    double T;
    cout << "Time Period : ";
    cin >> T;

    double c1= 1+R/100;
    double c2= pow(c1,T);
    double amount= P*c2;
    double CI= amount-P;
    cout<<"Comupound Interest : "<<CI;
    // P-p(1-r/100)^t
    // int si= (P*R*T)/100;
    // cout<< si;

    return 0;
}
