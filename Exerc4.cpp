#include <iostream>
#include <string>

using namespace std;

// Based on the exercise and the examples, I'm assuming that there are no empty spaces on the strings
// Considering strings with Portugues alphabet ascii [a-z](no space within string)

/**
 * Assuming that the constraints:
 *  a) 1 <= | s | <= 100
    b) 1 <= | t | <= 100
    c) 1 <= k <= 100
    d) s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z]
    are respected, the following program can be used
*/

// Function to check if string s can be converted to string t using exactly k operations
string ConcatRemove(string s, string t, int k) {
    // commonLength: parameter used to find the minimal common length between strings s and t
    int commonLength = 0;

    // Find the length of the common prefix of s and t
    while (commonLength < min(s.length(), t.length()) && s[commonLength] == t[commonLength]) {
        commonLength++;
    }

    // Calculate the total length of s and t after removing the common prefix
    int requiredOperations = (s.length() - commonLength) + (t.length() - commonLength);

    // Check if k is enough to perform the operations
    // As extra operation may be spent on an empty string, we need only check that required operations is less than required k
    if (requiredOperations <= k){
        return "yes";
    } else{
        return "no";
    }
}

int main() {
    
    // Declare a variable to store user input
    string stringS;
    string stringT;
    int kParameter;

    // Gathering input parameters from User
    std::cout << "Insert string s: ";
    std::cin >> stringS;

    std::cout << "Insert string t: ";
    std::cin >> stringT;

    std::cout << "Insert parameter k: ";
    std::cin >> kParameter;
  
    // Output
    cout << ConcatRemove(stringS, stringT, kParameter) << endl;

    return 0;
}