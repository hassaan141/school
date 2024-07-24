#include <iostream>
#include <string>
using namespace std;

int stringLength(const string& str) {
    return str.length();
}

int main() {
    const int MAX_LENGTH = 500; // Maximum length of input text
    string input;
    cout << "Enter a text (maximum length 500 characters): ";
    getline(cin, input);

    // Truncate input if it exceeds maximum length
    if (input.length() > MAX_LENGTH) {
        cout << "Input text exceeds maximum length. Truncating to 500 characters." << endl;
        input = input.substr(0, MAX_LENGTH);
    }

    int length = stringLength(input);

    cout << "Length of the text is: " << length << endl;

    return 0;
}
