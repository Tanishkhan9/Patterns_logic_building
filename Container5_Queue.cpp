#include<iostream>
#include<queue>

using namespace std;

int main() {

    queue<int> q;

    // Insert elements
    q.push(1);
    q.push(2);
    q.emplace(3);

    // Access front and back
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Modify back element
    q.back() += 5;

    cout << "Updated Back: " << q.back() << endl;

    // Remove front element
    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Empty check
    cout << "Is Empty: " << q.empty() << endl;

    return 0;
}
