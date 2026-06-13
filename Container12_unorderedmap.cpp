#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    // UNORDERED MAP
    // 1. Stores data in Key : Value format.
    // 2. Keys are unique.
    // 3. Elements are NOT stored in sorted order.
    // 4. Implemented using Hash Table.
    // 5. Average Time Complexity:
    //    Insert -> O(1)
    //    Search -> O(1)
    //    Erase  -> O(1)

    unordered_map<int,int> um;

    // Insert elements

    um[1] = 100;
    um[2] = 200;
    um[3] = 300;

    // insert() method

    um.insert({4,400});

    // emplace() method

    um.emplace(5,500);

    // Updating value of existing key

    um[2] = 250;

    // Display elements
    // Order is not guaranteed

    cout << "Unordered Map Elements:\n";

    for(auto it : um)
    {
        cout << it.first
             << " -> "
             << it.second
             << endl;
    }

    // Size of unordered_map

    cout << "\nSize = "
         << um.size()
         << endl;

    // Access value using key

    cout << "Value at key 1 = "
         << um[1]
         << endl;

    // Find a key

    auto itr = um.find(3);

    if(itr != um.end())
    {
        cout << "Key 3 Found" << endl;
        cout << "Value = "
             << itr->second
             << endl;
    }
    else
    {
        cout << "Key 3 Not Found" << endl;
    }

    // Count function
    // Returns 1 if key exists
    // Returns 0 if key doesn't exist

    cout << "Count of key 2 = "
         << um.count(2)
         << endl;

    cout << "Count of key 10 = "
         << um.count(10)
         << endl;

    // Erase by key

    um.erase(2);

    cout << "\nAfter Erasing Key 2:\n";

    for(auto it : um)
    {
        cout << it.first
             << " -> "
             << it.second
             << endl;
    }

    // Empty check

    if(um.empty())
        cout << "Unordered Map is Empty\n";
    else
        cout << "Unordered Map is Not Empty\n";

    // Clear all elements

    um.clear();

    cout << "Size after clear = "
         << um.size()
         << endl;

    return 0;
}
