#include <iostream>
using namespace std;
int main() {
    std::string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++) {
        std::cout << i << " = " << cars[i] << "\n";
    }

    return 0;
}

