#include <iostream>
using namespace std;

int main() {

    cout << "Program:\n";
    cout << "1. a = 5\n";
    cout << "2. b = a + 3\n";
    cout << "3. c = b + a\n\n";

    cout << "Data Flow Analysis:\n\n";

    cout << "Statement 1: a is defined\n";
    cout << "Statement 2: a is used, b is defined\n";
    cout << "Statement 3: b and a are used, c is defined\n\n";

    cout << "Live Variables:\n";
    cout << "a -> used in statements 2 and 3\n";
    cout << "b -> used in statement 3\n";
    cout << "c -> final output\n";

    return 0;
}
