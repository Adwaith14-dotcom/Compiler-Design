#include <iostream>
#include <stack>
using namespace std;

struct NFA {
    int start;
    int end;
};

int state = 0;

NFA createBasic(char symbol) {
    NFA nfa;
    nfa.start = state++;
    nfa.end = state++;

    cout << "Transition: " << nfa.start << " --" << symbol << "--> " << nfa.end << endl;

    return nfa;
}

NFA concatenate(NFA a, NFA b) {
    cout << "Epsilon transition: " << a.end << " --> " << b.start << endl;

    NFA result;
    result.start = a.start;
    result.end = b.end;

    return result;
}

NFA unionNFA(NFA a, NFA b) {
    NFA result;

    result.start = state++;
    result.end = state++;

    cout << "Epsilon transition: " << result.start << " --> " << a.start << endl;
    cout << "Epsilon transition: " << result.start << " --> " << b.start << endl;

    cout << "Epsilon transition: " << a.end << " --> " << result.end << endl;
    cout << "Epsilon transition: " << b.end << " --> " << result.end << endl;

    return result;
}

int main() {
    string regex;
    stack<NFA> s;

    cout << "Enter Regular Expression: ";
    cin >> regex;

    for(char c : regex) {

        if(isalpha(c)) {
            s.push(createBasic(c));
        }

        else if(c == '.') {   
            NFA b = s.top(); s.pop();
            NFA a = s.top(); s.pop();
            s.push(concatenate(a,b));
        }

        else if(c == '|') {   // union
            NFA b = s.top(); s.pop();
            NFA a = s.top(); s.pop();
            s.push(unionNFA(a,b));
        }
    }

    cout << "NFA construction completed." << endl;

    return 0;
}
