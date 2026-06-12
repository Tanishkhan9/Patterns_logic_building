#include<iostream>
#include<set>
using namespace std;

int main()
{
    // MULTISET
    // 1. Stores elements in sorted order.
    // 2. Allows duplicate elements.
    // 3. Implemented using Red-Black Tree.
    // 4. Insertion, Deletion, Search -> O(log n)
   
    multiset<int> ms;

    // Inserting elements
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);
    ms.insert(40);
    ms.insert(10);

    cout << "Elements in Multiset: ";
    for(auto x : ms)
        cout << x << " ";
    cout << endl;

    // SIZE
    cout << "Size = " << ms.size() << endl;

    // COUNT
    // Returns frequency of an element
    cout << "Count of 10 = "
         << ms.count(10) << endl;

    // FIND
    // Returns iterator to first occurrence
    auto it = ms.find(20);

    if(it != ms.end())
        cout << "20 Found" << endl;
    else
        cout << "20 Not Found" << endl;

   // LOWER BOUND
  // First element >= value
    cout << "Lower Bound of 20 = "
         << *ms.lower_bound(20)
         << endl;

    // UPPER BOUND
    // First element > value
    cout << "Upper Bound of 20 = "
         << *ms.upper_bound(20)
         << endl;

    // EQUAL RANGE
    // Returns pair of lower_bound and upper_bound
    // Useful for traversing duplicates
    auto range = ms.equal_range(10);

    cout << "All occurrences of 10: ";

    for(auto itr = range.first;
        itr != range.second;
        itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    // FIRST AND LAST ELEMENT
    cout << "Smallest Element = "
         << *ms.begin()
         << endl;

    cout << "Largest Element = "
         << *ms.rbegin()
         << endl;

    // ERASE BY VALUE
    // Removes ALL occurrences
    multiset<int> temp = ms;

    temp.erase(10);

    cout << "After erase(10): ";

    for(auto x : temp)
        cout << x << " ";

    cout << endl;

    // ERASE BY ITERATOR
    // Removes ONLY ONE occurrence
    temp = ms;

    temp.erase(temp.find(10));

    cout << "After erase(find(10)): ";

    for(auto x : temp)
        cout << x << " ";

    cout << endl;

    // ERASE RANGE
    // Removes a range of elements
    temp = ms;

    auto first = temp.find(10);
    auto last = next(first,2);

    temp.erase(first,last);

    cout << "After Range Erase: ";

    for(auto x : temp)
        cout << x << " ";

    cout << endl;

    // FREQUENCY USING EQUAL_RANGE
    auto p = ms.equal_range(20);

    int freq = distance(p.first,p.second);

    cout << "Frequency of 20 = "
         << freq << endl;

    // REVERSE TRAVERSAL
    cout << "Reverse Traversal: ";

    for(auto it = ms.rbegin();
        it != ms.rend();
        it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // EMPTY
    if(ms.empty())
        cout << "Multiset Empty" << endl;
    else
        cout << "Multiset Not Empty" << endl;

    // SWAP
    multiset<int> ms2 = {100,200,300};

    ms.swap(ms2);

    cout << "After Swap ms: ";

    for(auto x : ms)
        cout << x << " ";

    cout << endl;

    // CLEAR
    ms.clear();

    cout << "Size After Clear = "
         << ms.size() << endl;

    // DESCENDING ORDER MULTISET
    multiset<int,greater<int>> desc;

    desc.insert(10);
    desc.insert(40);
    desc.insert(20);
    desc.insert(40);

    cout << "Descending Multiset: ";

    for(auto x : desc)
        cout << x << " ";

    cout << endl;

    return 0;
}
