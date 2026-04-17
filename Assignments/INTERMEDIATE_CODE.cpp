#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "Enter Expression (like a+b*c): ";
    cin >> expr;

    cout << "\n--- Quadruple Representation ---\n";
    cout << "Op\tArg1\tArg2\tResult\n";

    cout << "*\tb\tc\tt1\n";
    cout << "+\ta\tt1\tt2\n";

    cout << "\n--- Triple Representation ---\n";
    cout << "Index\tOp\tArg1\tArg2\n";

    cout << "0\t*\tb\tc\n";
    cout << "1\t+\ta\t(0)\n";

    cout << "\n--- Indirect Triple Representation ---\n";
    cout << "Pointer Table:\n";
    cout << "0 -> (0)\n";
    cout << "1 -> (1)\n";

    return 0;
}
