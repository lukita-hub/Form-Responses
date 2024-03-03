#include <iostream>

using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a string from the user

    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Swap characters from start and end of the string without using any temporary variable
    for (int i = 0; i < length / 2; i++) {
        str[i] = str[i] + str[length - i - 1];
        str[length - i - 1] = str[i] - str[length - i - 1];
        str[i] = str[i] - str[length - i - 1];
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}

/**
 * A = 010000001
B = 010000010

1st step:
A = A ^ B
A = 000000011
B = 010000010

2nd step:
B = B ^ A
A = 000000011
B = 010000001

3rd step:
A = A ^ B
A = 010000010
B = 010000001


var1: A
var2: B

var1: A ^ B
var2: B

Step1:
var1: A
var2: B
var1 <- A ^ B
var1: A ^ B
var2: B

Step2: 
start
	var1: A ^ B
	var2: B
op
	var2 <- B ^ A == B ^ (A ^ B) == (B ^ B) ^ A == A
	logo: B <- A
end	
	var1: A ^ B
	var2: A

Step3:
start
	var1: A ^ B
	var2: A
op	
	var1 <- (A ^ B) ^ A == B ^ (A ^ A) == B
end:
	var1: B
	var2: A
*/