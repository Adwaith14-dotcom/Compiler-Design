#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char production[10][10];
    char alpha[10], beta[10];
    int i;

    cout<<"Enter production (Example: A->Aa|b): ";
    cin>>production[0];

    if(production[0][0]==production[0][3])
    {
        cout<<"Left Recursion detected\n";

        for(i=4;i<strlen(production[0]);i++)
            alpha[i-4]=production[0][i];

        alpha[i-4]='\0';

        beta[0]=production[0][3];
        beta[1]='\0';

        cout<<"After removing left recursion:\n";

        cout<<production[0][0]<<" -> "<<beta<<production[0][0]<<"'\n";
        cout<<production[0][0]<<"' -> "<<alpha<<production[0][0]<<"' | e\n";
    }
    else
    {
        cout<<"No Left Recursion\n";
    }

    return 0;
}
