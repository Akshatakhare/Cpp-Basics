#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int a, b;
    // cout << "Enter 1st intger: ";
    // cin >> a;

    // cout << "Enter 2nd intger: ";
    // cin >> b;

    // cout << "Addition: " << a + b << endl;
    // cout << "Subtraction: " << a - b << endl;
    // cout << "Product: " << a * b << endl;
    // cout << "Division: " << a / b << endl;
    // cout << "Modulus: " << a % b << endl;

    // return 0;

    // 2. Size of int, float, double and char in Your System

    // cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    // cout << "Size of char: " << sizeof(char) << " byte" << endl;
    // cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    // cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    // 3. The number is Perfect number, deficient number, and abundant number.

    // int a;
    // int sum = 0;
    // cout << "Enter the number: ";
    // cin >> a;

    // for (int i = 1; i < a; i++)
    // {
    //     if (a % i == 0)
    //         sum += i;
    // }
    // if (sum == a)
    // {
    //     cout << "It is perfect number " << endl;
    // }
    // else if (sum > a)
    //     cout << "It is Abundant number" << endl;
    // else
    //     cout << "It is Deficient number" << endl;

    // // 4.  Area And Circumference Of Circle
    // float pi = 3.14;
    // float radius;
    // cout << "Enter radius: ";
    // cin >> radius;

    // cout << "Area of Circle: " << pi * radius * radius << endl;

    // cout << "Circumference of Circle: " << 2 * pi * radius << endl;

    // // Area Of Triangle
    // int base, height;
    // cout << "Enter the base: ";
    // cin >> base;

    // cout << "Enter the height: ";
    // cin >> height;

    // cout << "Area of triangle: " << 0.5 * base * height << endl;

    // 5. ASCII Value Of Character:

    // char a;
    // cout << "Enter the character: ";
    // cin >> a;
    // cout << "The ASCII Value Of given character " << a << " is " << int(a);

    // 6. Calculate A Simple Interest
    // int p, r, t;
    // cout << "Enter Principle: ";
    // cin >> p;

    // cout << "Enter Rate of interest: ";
    // cin >> r;

    // cout << "Enter Time period: ";
    // cin >> t;

    // cout << "Simple Interest: " << (p * r * t) / 100 << endl;
    // 7.
    //     int sub,marks,n,i,sum=0,tmp=0,arr[10],Percentage;

    //    cout<<"\nEnter number of subject : \n";
    //    cin>>n;

    //    tmp=n*100;

    //    cout<<"\nEnter The Marks: \n";
    //    for(i=0;i<n;i++)
    //    {
    //        cin>>arr[i];
    //    }
    //    for(i=0;i<n;i++)
    //    {
    //     sum=sum+arr[i];


//    Percentage = ( sum * 100 ) / tmp;

//    cout<<"\nPercentage Of Student : \n"<< Percentage<<endl;
// //  8. Converting Temperature Celsius Into Fahrenheit

// float fahrenheit, celsius;

// cout << "Temperature in Celsius: ";
// cin >> celsius;
// fahrenheit = (celsius * 9.0) / 5.0 + 32;
// cout << "The temperature in Celsius    : " << celsius << endl;
// cout << "The temperature in Fahrenheit : " << fahrenheit << endl;

// // 9. Read Integer (N) And Print First Three Powers (N^1, N^2, N^3)
//    int num;
//   cout<<"\nEnter The Number: ";
//   cin>>num;
//   cout<<"\nOutput: ";
// //   cout<<num<<"  ,"<<num*num<<"  ,"<<num*num*num<<endl;
  
// // 10. Swap Two Number Without Using Third Variable
//  int a, b;   
// cout<<"Enter first digit of your number " ;
// cin>>a;
// cout<<"enter second digit of your number ";
// cin>>b;
// cout<<"Before swap "<<10*a + b<<endl;      
// cout<<"After swap "<<10*b + a<<endl;      
int a,b;
cout<<"1st number"<<endl;
cin>>a;
cout<<"2nd number"<<endl;
cin>>b;
cout<<"a/b :"<<a%b;
return 0;
}