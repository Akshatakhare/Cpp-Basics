#include <iostream>
#include <string>

using namespace std;

int add(int c, int b)
{
    int d;
    d = c + b;
    return d;
}
int main()
{
    cout << "Hello World" << endl;
    cout << "you're gorgeous" << endl;
    /*short _=7;
    cout<<_;*/
    int m = 9.5;
    // cout<<"Your cgpa for this semester is "<<m;
    // short a;
    // int b;
    // long c;
    // float const sona= 97.7;
    // double const maggu=96.89;
    // long double const  jaisika=78.9456;
    // cout <<"The final marks for this year is "<< sona<<  endl;
    // cout <<"The final marks for this year is "<< maggu<< endl ;
    // cout <<"The final marks for this year is "<< jaisika << endl;
    // int a,b;
    // cout<<"Enter the first number"<<endl;
    // cin>>a;

    // cout<<"Enter the second number"<<endl;
    // cin>>b;

    //  cout<<"a+b:"<< a+b <<endl;
    //  cout<<"a-b:"<< a-b <<endl;
    //  cout<<"a*b:"<< a*b <<endl;
    //  cout<<"a/b:"<< a%b <<endl;
    int n;
    cout << "Enter any integer:";
    cin >> n;
    if( n%2<=0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    // switch (n)
    // {
    // case 2:
    //     cout << "Even number";

    //     break;

    // default:
    //     cout << "Odd number";

    //     break;
    // }
    /* loop: there are 3 types of loops:
    while
    do while
    for while
    ye jo abhi vla h it is for -> while loop*/
    // int age=0;
    // while (age<18)
    // {
    //     cout<<"Negligible to vote as you are "<<age<<endl;
    //     age=age+1;

    // }
    // int a=0;
    // do
    // {
    //     cout<<"current indexing is:" << a <<endl;
    //     a=a+1;
    // } while (a<25);
    // time is 44:38 for this for loop dekh lio je kuch smjh na aaye isme
    // for (int i = 0; i < 34 ; i++)
    // {
    //     cout<<"the value of i is"<<i<<endl;

    // }
    // fuction:

    // int b, c;
    // cout << "Enter 1st number: ";
    // cin >> b;

    // cout << "Enter 2nd number: ";
    // cin >> c;

    // cout << "the sum of these integers is: " << add(b, c);

    // int a= 45;
    // cout<<(float)a/6<<endl;
    // float s=51.23;
    // cout<<(int)s;

    // string name= "akshata";
    // cout<<"The most intelligent girl is "<<name<<endl;
    // cout<<"The length is "<<name.length() 0<<endl;
    // cout<<"The most intelligent girl is "<<name.substr(0,4)<<endl;

    // int a=23;
    // int* ptra;
    // ptra =&a;
    // cout<<ptra<<endl; //address of the variable.
    // cout<<*ptra<<endl;// if agr we use * before the pointer then it will give us the VALUE of the variable
    // cout<<"the value of the a is "<<a<<endl;
    // cout<<"the value of the a is "<<*ptra<<endl;
    // cout<<"the address of the a is "<<ptra<<endl;
    // cout<<"the address of the a is "<<&a<<endl;





    return 0;
}