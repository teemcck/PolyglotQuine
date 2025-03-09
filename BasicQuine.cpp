#include <iostream>

using namespace std;

// Todo: read the documentation more, itll be alright.

string quote_str(string str) {
    return "\"" + str + "\"";
}

// What is a quine? A quine is a program that outputs its source code.
int main() {
    string program = "test";

    cout << "test";

    return 0;
}