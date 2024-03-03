#include <iostream>

int main() {
    for (int i = 1; i <= 100; ++i) {
        std::cout << ((i % 3 == 0 ? "Foo": "") + (i % 5 == 0 ? "Baa": "") + (std::to_string(i))) << std::endl;
    }
    return 0;
}
