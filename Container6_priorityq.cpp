#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {

    // Max Heap (Default)
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.emplace(15);

    cout << "===== Max Heap =====" << endl;

    cout << "Top Element: " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;

    pq.pop();

    cout << "Top after pop(): " << pq.top() << endl;
    cout << "Is Empty? " << pq.empty() << endl;

    priority_queue<int> temp = pq;

    cout << "Elements: ";
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;


    // Min Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(5);
    min_pq.emplace(15);

    cout << "\n===== Min Heap =====" << endl;

    cout << "Top Element: " << min_pq.top() << endl;
    cout << "Size: " << min_pq.size() << endl;

    min_pq.pop();

    cout << "Top after pop(): " << min_pq.top() << endl;
    cout << "Is Empty? " << min_pq.empty() << endl;

    priority_queue<int, vector<int>, greater<int>> temp2 = min_pq;

    cout << "Elements: ";
    while(!temp2.empty()) {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    cout << endl;

    return 0;
}
