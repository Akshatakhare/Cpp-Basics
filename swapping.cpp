// 17.06.24

#include <iostream>
using namespace std;

void swapPointer(int* p, int* q){
    int temp= *p;
    *p=*q;
    *q=temp;
}
void swapinters(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    // Q6. Write a Program to Check Even or Odd Integers.

    // int a ;
    // cout<<"Enter the number : ";
    // cin>>a;
    // if (a%2==0){
    //     cout<<a<<" is a Even interger";
    // }
    // else{
    //     cout<<a<<" is a Odd interger";
    // }

    // Q7. Write a Program to Swap Two Numbers.

    int a , b;
    cout<<"Enter the 1st value : ";
    cin>>a;
    cout<<"Enter the 2nd value : ";
    cin>>b;

    cout << "Before swaping" << endl;
    cout << "The value of a : " << a << ", b : " << b << endl;

    // swap(a, b);
    swapPointer(&a,&b);
    cout << "After swaping" << endl;
    cout << "The value of a : " << a << ", b : " << b;

    return 0;
}