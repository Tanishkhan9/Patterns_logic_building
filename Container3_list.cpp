#include<iostream>
#include<list>
using namespace std;

int main() {

    // List is a doubly linked list
    // Fast insertion and deletion
    // Does not support random access like vector

    list<int> ls;

    // Adding elements

    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);

    ls.push_front(5);

    cout << "List Elements: ";

    for(auto it : ls) {
        cout << it << " ";
    }

    cout << endl;

    // Removing elements

    ls.pop_front();
    ls.pop_back();

    cout << "After Deletion: ";

    for(auto it : ls) {
        cout << it << " ";
    }

    cout << endl;

    // Insert at specific position

    auto it = ls.begin();
    advance(it, 1);

    ls.insert(it, 15);

    cout << "After Insert: ";

    for(auto x : ls) {
        cout << x << " ";
    }

    cout << endl;

    // Size

    cout << "Size: " << ls.size() << endl;

    // Front and Back

    cout << "Front: " << ls.front() << endl;
    cout << "Back: " << ls.back() << endl;

    // Reverse

    ls.reverse();

    cout << "After Reverse: ";

    for(auto x : ls) {
        cout << x << " ";
    }

    cout << endl;

    // Sort

    ls.sort();

    cout << "After Sort: ";

    for(auto x : ls) {
        cout << x << " ";
    }

    cout << endl;

    // Clear

    ls.clear();

    cout << "Is Empty: " << ls.empty() << endl;

    return 0;
}
