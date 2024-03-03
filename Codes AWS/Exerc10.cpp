#include <iostream>

using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a string from the user

    // Iterate over the characters of the string until a null character is encountered
    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}
