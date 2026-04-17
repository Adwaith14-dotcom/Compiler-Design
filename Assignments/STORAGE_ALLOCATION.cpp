#include <iostream>
using namespace std;

int main() {

    cout << "Storage Allocation Strategies\n\n";

    cout << "1. Static Allocation:\n";
    cout << "- Memory allocated at compile time\n";
    cout << "- Example: global variables\n\n";

    cout << "2. Stack Allocation:\n";
    cout << "- Memory allocated during function calls\n";
    cout << "- Follows LIFO (Last In First Out)\n\n";

    cout << "Example:\n";
    cout << "Function A calls B\n";
    cout << "B executes and returns\n";
    cout << "Then A resumes\n\n";

    cout << "3. Heap Allocation:\n";
    cout << "- Memory allocated dynamically\n";
    cout << "- Using new/malloc\n";
    cout << "- Managed manually\n\n";

    cout << "Example:\n";
    cout << "int *p = new int;\n";

    return 0;
}
