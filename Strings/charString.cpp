#include <iostream>
using namespace std;

int main()
{
    char s[]={'h','e','l','\0','a'};
    cout<<s<<endl; // only prints hel and stops after that
    cout<<s[4]<<endl;
    string S="hello";
    
    // printf("\nJust cin\n");
    // cin>>s;
    // printf(s);

    // printf("\nJust get\n");
    // cin.get(s,10);
    // printf(s);

    // cin.ignore();
    // printf("\nJust second get\n"); 
    // cin.get(s,10);
    // printf(s);

    // cin.ignore();
    printf("\nJust getline\n");
    cin.getline(s,10);
    printf(s);

    printf("\nJust second getline\n");
    cin.getline(s,10);
    printf(s);

    return 0; 
}