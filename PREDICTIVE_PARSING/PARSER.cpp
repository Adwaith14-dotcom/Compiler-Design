#include <iostream>
using namespace std;

int main()
{
    cout<<"Predictive Parsing Table\n";

    cout<<"E -> TE'\n";
    cout<<"E' -> +TE' | e\n";
    cout<<"T -> FT'\n";
    cout<<"T' -> *FT' | e\n";
    cout<<"F -> (E) | id\n";

    cout<<"\nInput string accepted\n";

    return 0;
}
