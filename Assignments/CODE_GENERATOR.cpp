#include <iostream>
using namespace std;

int main() {
    char a, b, c, op;

    cout << "Enter expression (example: a+b): ";
    cin >> a >> op >> b;

    cout << "\nGenerated Code:\n";

    switch(op) {
        case '+':
            cout << "MOV R1, " << a << endl;
            cout << "ADD R1, " << b << endl;
            break;

        case '-':
            cout << "MOV R1, " << a << endl;
            cout << "SUB R1, " << b << endl;
            break;

        case '*':
            cout << "MOV R1, " << a << endl;
            cout << "MUL R1, " << b << endl;
            break;

        case '/':
            cout << "MOV R1, " << a << endl;
            cout << "DIV R1, " << b << endl;
            break;

        default:
            cout << "Invalid operator\n";
    }

    return 0;
}
