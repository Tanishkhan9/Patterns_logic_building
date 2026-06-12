#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    // UNORDERED SET
    // 1. Stores only unique elements.
    // 2. Duplicate values are not allowed.
    // 3. Elements are not stored in sorted order.
    // 4. Implemented using Hash Table.
    // 5. Average Time Complexity:
    //    Insert -> O(1)
    //    Search -> O(1)
    //    Erase  -> O(1)

    unordered_set<int> us;

    // Insert elements
    us.insert(1);
    us.insert(2);
    us.insert(2); // Duplicate, ignored
    us.insert(3);
    us.insert(4);

    // Display elements
    // Order is not guaranteed
    cout << "Elements: ";

    for(auto x : us)
        cout << x << " ";

    cout << endl;

    // Returns total number of unique elements
    cout << "Size = "
         << us.size() << endl;

    // Returns:
    // 1 -> Element exists
    // 0 -> Element does not exist
    cout << "Count of 2 = "
         << us.count(2) << endl;

    cout << "Count of 10 = "
         << us.count(10) << endl;

    // find() returns iterator to element
    // If not found, returns us.end()
    auto it = us.find(2);

    if(it != us.end())
        cout << "2 Found" << endl;
    else
        cout << "2 Not Found" << endl;

    // Removes the specified element
    us.erase(1);

    cout << "After erase(1): ";

    for(auto x : us)
        cout << x << " ";

    cout << endl;

    // Check whether set is empty
    if(us.empty())
        cout << "Set is Empty" << endl;
    else
        cout << "Set is Not Empty" << endl;

    // Removes all elements
    us.clear();

    cout << "Size after clear = "
         << us.size() << endl;

    return 0;
}
