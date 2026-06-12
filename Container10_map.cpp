#include<iostream>
#include<map>
using namespace std;

int main()
{
    // MAP
    // 1. Stores data in Key : Value format.
    // 2. Keys are unique.
    // 3. Automatically sorted according to keys.
    // 4. Implemented using Red-Black Tree.
    // 5. Insert, Search, Erase -> O(log n)

    map<int,int> m;

    // Inserting elements

    m[1] = 10;       // Key = 1, Value = 10
    m[2] = 20;       // Key = 2, Value = 20

    // insert() method
    m.insert({3,30});

    // emplace() method
    m.emplace(4,40);

    // If key already exists, value gets updated
    m[2] = 200;

    // Display map

    cout << "Map Elements:\n";

    for(auto it : m)
    {
        cout << it.first << " -> "
             << it.second << endl;
    }

    // Size of map

    cout << "\nSize = "
         << m.size() << endl;

    // Find a key

    auto itr = m.find(3);

    if(itr != m.end())
    {
        cout << "Key 3 Found" << endl;
        cout << "Value = "
             << itr->second << endl;
    }

    // Count function
    // Returns 1 if key exists
    // Returns 0 if key doesn't exist

    cout << "Count of key 2 = "
         << m.count(2) << endl;

    cout << "Count of key 10 = "
         << m.count(10) << endl;

    // Access value using key

    cout << "Value at key 1 = "
         << m[1] << endl;

    // Erase by key

    m.erase(2);

    cout << "\nAfter Erasing Key 2:\n";

    for(auto it : m)
    {
        cout << it.first << " "
             << it.second << endl;
    }

    // First element

    cout << "\nFirst Key = "
         << m.begin()->first << endl;

    // Last element

    auto last = prev(m.end());

    cout << "Last Key = "
         << last->first << endl;

    // Lower Bound
    // First key >= given key

    auto lb = m.lower_bound(3);

    if(lb != m.end())
    {
        cout << "Lower Bound of 3 = "
             << lb->first << endl;
    }

    // Upper Bound
    // First key > given key

    auto ub = m.upper_bound(3);

    if(ub != m.end())
    {
        cout << "Upper Bound of 3 = "
             << ub->first << endl;
    }

    // Empty check

    if(m.empty())
        cout << "Map is Empty\n";
    else
        cout << "Map is Not Empty\n";

    // Clear all elements

    m.clear();

    cout << "Size after clear = "
         << m.size() << endl;

    return 0;
}
