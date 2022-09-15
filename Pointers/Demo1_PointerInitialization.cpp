#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *b = &a;
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<**(&b)<<"\n";

    return 0; 
}