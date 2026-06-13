#include<iostream>
#include<map>
using namespace std;

int main()
{
    // MULTIMAP
    // 1. Stores data in Key : Value format.
    // 2. Duplicate keys are allowed.
    // 3. Keys are automatically sorted.
    // 4. Implemented using Red-Black Tree.
    // 5. Insert, Search, Erase -> O(log n)
    multimap<int,int> mm;
    // Insert elements
    mm.insert({1,100});
    mm.insert({1,200});
    mm.insert({2,300});
    mm.insert({2,400});
    mm.insert({3,500});
    // Display all elements
    cout << "Multimap Elements:\n";
    for(auto it : mm)
    {
        cout << it.first
             << " -> "
             << it.second
             << endl;
    }
    // Count occurrences of a key
    cout << "\nCount of Key 1 = "
         << mm.count(1)
         << endl;
    cout << "Count of Key 2 = "
         << mm.count(2)
         << endl;
    // Find first occurrence of a key
    auto itr = mm.find(2);
    if(itr != mm.end())
    {
        cout << "\nFirst occurrence of key 2: "
             << itr->first
             << " -> "
             << itr->second
             << endl;
    }
    // Display all values associated with key 2
    auto range = mm.equal_range(2);
    cout << "\nAll values of key 2:\n";
    for(auto it = range.first;
        it != range.second;
        it++)
    {
        cout << it->first
             << " -> "
             << it->second
             << endl;
    }
    // Lower Bound
    // First key >= given key
    auto lb = mm.lower_bound(2);
    if(lb != mm.end())
    {
        cout << "\nLower Bound of 2 = "
             << lb->first
             << " -> "
             << lb->second
             << endl;
    }
    // Upper Bound
    // First key > given key
    auto ub = mm.upper_bound(2);
    if(ub != mm.end())
    {
        cout << "Upper Bound of 2 = "
             << ub->first
             << " -> "
             << ub->second
             << endl;
    }
    // Erase all entries having key = 1
    mm.erase(1);
    cout << "\nAfter erase(1):\n";
    for(auto it : mm)
    {
        cout << it.first
             << " -> "
             << it.second
             << endl;
    }
    // Size
    cout << "\nSize = "
         << mm.size()
         << endl;
    // Empty check
    if(mm.empty())
        cout << "Multimap is Empty\n";
    else
        cout << "Multimap is Not Empty\n";
    // Clear all elements
    mm.clear();
    cout << "Size after clear = "
         << mm.size()
         << endl;

    return 0;
}
