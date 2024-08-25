#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    
    /* 1st pattern*/
    // int value=1;
    char value = 'A';
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << value;
            value = value + 1;
        }
        cout << endl;
    } 
    
    cout<<endl;

    /* 2nd Pattern*/
    char n='D';
    for (char i ='A'; i <= n; i++)
    {
        for (char j = 'A'; j <= n; j++)
        {
            cout <<i;
        }
        cout<<endl;
    }

     /* 3rd Pattern*/
    // for (int i = 1; i <= a; i++)
    // {
    //     int space = i - 1;
    //     for (int j = 1; j<=space; space--)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= a - i + 1; k++)
    //     {
    //         cout << "*";
    //     }
        //  while loop se bhi hoga vese
        // while (space)
        // {
        //     cout << " ";
        //     space = space - 1;
        // }
        // int star = a - i + 1;
        // while (star)
        // {
        //     cout << "*";
        //     star -= 1;
        // }

    //     cout << endl;
    // }

    cout<<endl;

    /* 4th Pattern*/
    // the main pattern
    int space=a-1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= space; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        for (int l = 1; l <= i-1; l++)
        {
            cout<<i-l;
        }
        
        cout<<endl;
    }

    cout<<endl;

    // the dabangg question
    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            cout<<j<<" ";
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout<<"*"<<" ";
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout<<"*"<<" ";
        }
        for (int j = 1; j <= a-i+1; j++)
        {
            cout<<a-j+1<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}