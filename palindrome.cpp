#include <iostream>
using namespace std;

// Q11. Write a Program to Check Whether a Number Is a Palindrome or Not.

int checkpalindrome(int n, int r, int sum, int temp)
{
    sum=0;
    temp=n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "Palindrone";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}

int main()
{

    int n, r, sum = 0, temp;
    cout << "Enter the number : \n";
    cin >> n;
    // temp=n;
    // while (n > 0)
    // {
    //     r = n % 10;
    //     sum = sum * 10 + r;
    //     n = n / 10;
    // }
    // if (temp == sum)
    // {
    //     cout << "Palindrone";
    // }
    // else
    // {
    //     cout << "Not a palindrome";
    // }
    
  checkpalindrome(n,r,sum,temp);

    return 0;
}