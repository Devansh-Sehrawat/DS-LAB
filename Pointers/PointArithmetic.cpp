#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int *p = a, *q = a[3]; // dyanmic allocation of an array of int of size 5 to address variable p
    
    cout<<p[0]<<endl;
    for (int i = 0; i < 5; i++)
        a[i] = i;
    
    cout<<(p++)<<endl; // going to the next element
    cout<<(p--)<<endl; // going back to previous element 
    cout<<(p+2)<<endl; // takin two step forwards
    cout<<(p-2)<<endl; // takin two steps backward

    delete []p; // de-allocating memory from the heap
    p = nullptr;


    return 0; 
}