#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int *p = a;
    int *q = &a[3]; // dyanmic allocation of an array of int of size 5 to address variable p
    
    //cout<<p[0]<<endl;
    for (int i = 0; i < 5; i++)
        a[i] = i;
    
    //tip : see the post and pre increments
    cout<<p<<endl;
    cout<<*(p++)<<endl; // going to the next element
    cout<<*(p--)<<endl; // going back to previous element 
    cout<<*(p+2)<<endl; // takin two step forwards
    cout<<*(q-2)<<endl; // takin two steps backward
    cout<<(q-p)<<endl; // distance between two pointers


    return 0; 
}