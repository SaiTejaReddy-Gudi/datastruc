// CPP code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

// Display the queue elements
void printQ(queue<int> customQueue)
{
    queue<int> tempQueue = customQueue;
    while (!tempQueue.empty()) {
        cout << ' ' << tempQueue.front();
        tempQueue.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    queue<int> Q;
    
    Q.push(7);
    Q.push(3);
    Q.push(19);
    Q.push(21);
    Q.push(12);
    Q.push(11);
    cout << "Q is  ";

    printQ(Q);
    //printing size,last and top elemetns of Q
    cout << "\nQ.size() : " << Q.size();
    cout << "\nQ.front() : " << Q.front();
    cout << "\nQ.back() : " << Q.back();

    //poping an element from Q
    cout << "\nQ.pop() : ";
    Q.pop();
    printQ(Q);

    return 0;
}