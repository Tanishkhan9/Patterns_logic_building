#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // DEQUE (Double Ended Queue)
    // -------------------------------------
    // 1. Dynamic container similar to vector.
    // 2. Supports insertion and deletion
    //    from BOTH front and back.
    // 3. Random access is allowed like vector.
    // 4. Faster front insertion than vector.
    // 5. Implemented using multiple memory blocks.
    //
    // Time Complexity:
    // push_front() -> O(1)
    // push_back()  -> O(1)
    // pop_front()  -> O(1)
    // pop_back()   -> O(1)
    // access []    -> O(1)

    deque<int> dq;

    // Insert at back
    dq.push_back(10);
    dq.push_back(20);

    // Insert at front
    dq.push_front(5);
    dq.push_front(1);

    // Current deque:
    // 1 5 10 20

    cout << "Deque Elements: ";

    for(auto x : dq)
        cout << x << " ";

    cout << endl;

    // Access first element
    cout << "Front Element = "
         << dq.front() << endl;

    // Access last element
    cout << "Back Element = "
         << dq.back() << endl;

    // Access using index
    cout << "Element at Index 2 = "
         << dq[2] << endl;

    // Remove first element
    dq.pop_front();

    // Remove last element
    dq.pop_back();

    // Deque becomes:
    // 5 10

    cout << "After Pop Operations: ";

    for(auto x : dq)
        cout << x << " ";

    cout << endl;

    // Number of elements
    cout << "Size = "
         << dq.size() << endl;

    // Check whether deque is empty
    if(dq.empty())
        cout << "Deque Empty";
    else
        cout << "Deque Not Empty";

    return 0;
}
