#include <iostream>
using namespace std;
int fibonacci(int n){
    if (n<=1)           
    {
        return n;
    }
    

    return fibonacci(n-1)+ fibonacci(n-2);
}
int main()
{
// Q13. Write a Program to Reverse a Sentence Using Recursion.

    // string str= "Hi, my name is tandow..tandowww..!!!";
    // int a= str.length();
    // // cout<<a;
    // // cout<<st[2];

    // for (int i = 0; i < a/2; i++)
    // {
    //     cout<<str[a-i-1];                                 reverse the string niiii horaaa h T_T
    //     return 0;
    // }

    // Q14. Write a Program for Fibonacci Numbers Using Recursion.

    // fibonacci series = 1,1,2,3,5,8,13,21,44,.......

    int n;
    cout<<"Enter the term : ";
    cin>>n;
     cout<<"The series at "<<n<<" is : "<<fibonacci(n);
    
}