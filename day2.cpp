#include <iostream>
using namespace std;

int main()
{
    // Q7. Write a Program to Check Even or Odd Integers.

    // int a ;
    // cout<<"Enter the number : ";
    // cin>>a;
    // if (a%2==0){
    //     cout<<a<<" is a Even interger";
    // }
    // else{
    //     cout<<a<<" is a Odd interger";
    // }

    // Q8. Write a Program to Find the Largest Among 3 Numbers.

    // int a, b, c;
    // cout << "Enter the 1st number : ";
    // cin >> a;
    // cout << "Enter the 2nd number : ";
    // cin >> b;
    // cout << "Enter the 3rd number : ";
    // cin >> c;

    // if (a > b && a > c)
    // {
    //     // if (a>c)
    //     // {
    //     //     cout<<"The largest no is A : "<< a;
    //     // }
    //     cout << "The largest no is A : " << a;
    // }
    // else if (c > a && c > b)
    // {
    //     //    if (c>b){
    //     //         cout<<"The largest no is C : "<< c;
    //     //     }
    //     cout << "The largest no is C : " << c;
    // }
    // else if (b > c && b>a)
    // {
    //     // if (b > a)
    //     // {
    //     //     cout << "The largest no is B : " << b;
    //     // }
    //     cout << "The largest no is B : " << b;
    // }
    // else
    // {
    //     cout << "All are equal :)";
    // }   
    // max bhi use kr skte the hum

    // Q9. Write a Program to Check if a Given Year Is a Leap Year.
     
    // int year;
    // cout<<"Enter the year : ";
    // cin>>year;

    // if (year%4==0)
    // {
    //     cout<<year<<" is a LEAP YEAR";
    // }
    // else{
    //     cout<<"Not a leap year";
    // }

    // Q10. Write a Program to Check Whether a Number Is Prime or Not.

      int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";
    



    return 0;
}