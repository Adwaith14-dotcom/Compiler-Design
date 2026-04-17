#include <iostream>
using namespace std;

int main() {

    cout << "LR(0) Items for Grammar:\n";
    cout << "E -> E + T | T\n";
    cout << "T -> T * F | F\n";
    cout << "F -> (E) | id\n\n";

    cout << "Augmented Grammar:\n";
    cout << "E' -> .E\n\n";

    cout << "I0:\n";
    cout << "E' -> .E\n";
    cout << "E -> .E+T\n";
    cout << "E -> .T\n";
    cout << "T -> .T*F\n";
    cout << "T -> .F\n";
    cout << "F -> .(E)\n";
    cout << "F -> .id\n\n";

    cout << "I1:\n";
    cout << "E' -> E.\n";
    cout << "E -> E.+T\n\n";

    cout << "I2:\n";
    cout << "E -> T.\n";
    cout << "T -> T.*F\n\n";

    cout << "I3:\n";
    cout << "T -> F.\n\n";

    cout << "I4:\n";
    cout << "F -> ( .E )\n";
    cout << "E -> .E+T\n";
    cout << "E -> .T\n\n";

    cout << "I5:\n";
    cout << "F -> id.\n";

    return 0;
}
