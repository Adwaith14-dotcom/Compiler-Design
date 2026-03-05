#include <iostream>
using namespace std;

int main() {

    int nfa[10][2], dfa[10][2];
    int n, i, j;

    cout<<"Enter number of states: ";
    cin>>n;

    cout<<"Enter NFA transition table\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Transition for state "<<i<<" input "<<j<<" : ";
            cin>>nfa[i][j];
        }
    }

    cout<<"\nEquivalent DFA Transition Table:\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            dfa[i][j]=nfa[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<"State "<<i<<" -> ";
        for(j=0;j<2;j++)
        {
            cout<<dfa[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
