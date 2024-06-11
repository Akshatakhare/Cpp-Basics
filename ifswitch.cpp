#include <iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age : ";
    cin>>age;
    // if(age<18){
    //     cout<<"Not eligible to vote";
    // }
    // else if(age>100){
    //     cout<<"Invalid age";
    // }
    // else{
    //     cout <<"Eligible to vote";
    // }

    // if (18<=age && age<100)
    // {
    //     cout<<"Eligible to vote";
    // }
    // else if(age>18){
    //     cout<<"not eligible";
    // }
    // else{
    //     cout<<"Not eligible";
    // }

    // switch case

    switch (age)
    {
    case 22:
        cout<<"Eligible";
        break;
    case 12:
        cout<<"not Eligible";
        break;
    
    default:
    cout<<"pta ni bhai";
        break;
    }
    
    
    return 0;
}