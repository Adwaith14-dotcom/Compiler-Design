#include <iostream>
using namespace std;

int main()
{
    cout<<"AMBIGUOUS GRAMMAR EXAMPLE\n\n";

    cout<<"Grammar:\n";
    cout<<"E -> E + E\n";
    cout<<"E -> E * E\n";
    cout<<"E -> id\n\n";

    cout<<"Input String: id + id * id\n\n";

    cout<<"This grammar is AMBIGUOUS because the string can have two parse trees.\n\n";

    cout<<"Parse Tree 1:\n";
    cout<<"(id + id) * id\n\n";

    cout<<"Parse Tree 2:\n";
    cout<<"id + (id * id)\n\n";

    cout<<"Hence grammar is ambiguous.\n";

    return 0;
}
