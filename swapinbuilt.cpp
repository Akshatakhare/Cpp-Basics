#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cout<<"Enter the 1st value : ";
    cin>>a;
    cout<<"Enter the 2nd value : ";
    cin>>b;

    cout << "Before swaping" << endl;
    cout << "The value of a : " << a << ", b : " << b << endl;

    swap(a,b);
    cout << "After swaping" << endl;
    cout << "The value of a : " << a << ", b : " << b;

}