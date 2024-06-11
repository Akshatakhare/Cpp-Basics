#include <iostream>
using namespace std;

int main(){
    // int array[4]={12,23,34,45};
    // cout<<array[3];

    // int a[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     // cout<<"Enter the values for array"<<endl;
    //     cout<<"Enter the "<<i<<"th value : ";
    //     cin>>a[i];
    // }

    // cout<<"Everything all together"<<endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<i<<"th value is : "<<a[i]<<endl;
    // }

    // int arr[5]={1, 2 , 3 , 4,5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"{ "<<arr[i]<< " } ";
    // }

    int arr2d[2][3] = {  {1,2,3},
                         {4,5,6}
                         };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
        }

    }

    
    
    
}
