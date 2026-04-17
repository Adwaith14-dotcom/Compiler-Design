#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string keywords[] = {"int", "float", "if", "else", "while", "return", "for", "char"};
bool isKeyword(string word) {
    for(string k : keywords) {
        if(word == k)
            return true;
    }
    return false;
}
bool isOperator(char c) {
    return (c=='+' || c=='-' || c=='*' || c=='/' || c=='=' || c=='<' || c=='>');
}
bool isSpecialSymbol(char c) {
    return (c=='(' || c==')' || c=='{' || c=='}' || c==';' || c==',');
}
int main() {
    string input;

    cout << "Enter a statement:\n";
    getline(cin, input);
    string token = "";
    for(int i = 0; i < input.length(); i++) {
        char c = input[i];
        if(isalpha(c)) {
            token += c;
            while(i+1 < input.length() && isalnum(input[i+1])) {
                token += input[++i];
            }
            if(isKeyword(token))
                cout << token << " -> Keyword\n";
            else
                cout << token << " -> Identifier\n";
            token = "";
        }
        else if(isdigit(c)) {
            token += c;
            while(i+1 < input.length() && isdigit(input[i+1])) {
                token += input[++i];
            }
            cout << token << " -> Number\n";
            token = "";
        }
        else if(isOperator(c)) {
            if(i+1 < input.length() && input[i+1] == '=') {
                cout << c << "= -> Relational Operator\n";
                i++;
            }
            else {
                cout << c << " -> Operator\n";
            }
        }
        else if(isSpecialSymbol(c)) {
            cout << c << " -> Special Symbol\n";
        }
    }
    return 0;
}
