#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5]; // dyanmic allocation of an array of int of size 5 to address variable p
    p[0] = 1;
    p[1] = 2;

    cout<<p<<endl; // pointing to the first element of the array
    cout<<p[0]<<endl;
    for (int i = 0; i < 5; i++)
        cout<<p[i]<<endl;

    cout<<sizeof p<<endl; //displaying the size of the array in bytes
    delete []p; // de-allocating memory from the heap
    p = nullptr;
    return 0; 
}