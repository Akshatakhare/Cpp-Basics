#include <iostream>
using namespace std;
void myFunction()
{
    cout << "I just got executed!";
}
void myFunction(string fname)
{
    cout << fname << " Refsnes\n";
}

int main()
{
    myFunction(); // call the function
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}
