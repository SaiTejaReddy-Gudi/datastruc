// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> aStack;

    // Pushing elements onto the stack
    aStack.push(30);
    aStack.push(42);
    aStack.push(18);
    aStack.push(50);
    aStack.push(21);
    aStack.push(1);

    //popping 4 elements from the stack
    aStack.pop();
    aStack.pop();
    aStack.pop();
    aStack.pop();
    // Printing the remaining elements in the stack
    while (!aStack.empty()) {
        cout << aStack.top() << " ";
        aStack.pop();
    }

    return 0;
}