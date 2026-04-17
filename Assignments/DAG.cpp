#include <iostream>
using namespace std;

int main() {

    cout << "Expression: a + b * c + b * c\n\n";

    cout << "DAG Representation:\n";

    cout << "Node1: b * c -> t1\n";
    cout << "Node2: a + t1 -> t2\n";
    cout << "Node3: t2 + t1 -> t3\n\n";

    cout << "Optimized Expression using DAG:\n";
    cout << "t1 = b * c\n";
    cout << "t2 = a + t1\n";
    cout << "t3 = t2 + t1\n";

    return 0;
}
