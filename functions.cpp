#include <iostream>
using namespace std;

// funtion prototyping

float gmean(float,float);

int comparison (int a, int b)
{
    if (a>b)
    {
        cout<<"Greater one is : "; 
        return a;
    }
    else{
        return b;
    }   
}

int main()
{
    float x , y;
    cout<<"Enter the 1st no: ";
    cin>>x;
    cout<<"Enter the 1st no: ";
    cin>>y;
    cout<< comparison (x,y)<<endl;
    cout<<gmean(x,y);
}

float gmean ( float a, float b)
{
    float c ;
    c = (a + b) / (a * b);
    return c;
}
