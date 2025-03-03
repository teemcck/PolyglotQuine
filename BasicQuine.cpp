#include <iostream>
#include <string>

using namespace std;

// To do: reference guide to fix bugs. Add addquotations function?
// data = "; print('data = ' . data . data)"; print('data = ' . data . data)

// What is a quine? A quine is a program that outputs its source code.
int main() {
    string program = ";\n\n    cout << \"\\n#include <iostream>\\n#include <string>"
        " \\n\\nusing namespace std;\\n\\n\"\n        \"// What is a quine? A quine is a"
        " program that outputs its source code.\\n\"\n        \"int main() {\" << program"
        " << endl;\n    \nreturn 0;\n}";

    cout << "#include <iostream>\n#include <string>\n\nusing namespace std;\n\n" 
        "// What is a quine? A quine is a program that outputs its source code.\n"
        "int main() {\n    string program = " << program << program << endl;

    return 0;
}