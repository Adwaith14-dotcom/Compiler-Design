#include <iostream>
using namespace std;

int main()
{
    cout<<"FIRST(E) = { id , ( }\n";
    cout<<"FOLLOW(E) = { $ , ) }\n";

    cout<<"FIRST(T) = { id , ( }\n";
    cout<<"FOLLOW(T) = { + , $ }\n";

    cout<<"FIRST(F) = { id , ( }\n";
    cout<<"FOLLOW(F) = { * , + , $ }\n";

    return 0;
}
