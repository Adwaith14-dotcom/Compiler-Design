#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cin >> input;

    cout << "Input: " << input << endl;

    for(char c : input) {
        if(isalpha(c))
            cout << c << " -> Identifier" << endl;
        else if(isdigit(c))
            cout << c << " -> Number" << endl;
        else
            cout << c << " -> Operator" << endl;
    }

    return 0;
}
