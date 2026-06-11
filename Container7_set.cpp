#include<iostream>
#include<set>

using namespace std;

int main() {

    set<int> s;

    // Insert Elements
    s.insert(5);
    s.insert(3);
    s.emplace(8);
    s.insert(5); // Duplicate, ignored
    s.insert(1);

    // Print Set
    cout << "Set Elements: ";
    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Find
    auto it = s.find(3);

    if(it != s.end())
        cout << "Found: " << *it << endl;
    else
        cout << "Not Found" << endl;

    // Count
    cout << "Count of 3: " << s.count(3) << endl;
    cout << "Count of 10: " << s.count(10) << endl;

    // Lower Bound
    auto lb = s.lower_bound(4);

    if(lb != s.end())
        cout << "Lower Bound of 4: " << *lb << endl;
    else
        cout << "Lower Bound not found" << endl;

    // Upper Bound
    auto ub = s.upper_bound(4);

    if(ub != s.end())
        cout << "Upper Bound of 4: " << *ub << endl;
    else
        cout << "Upper Bound not found" << endl;

    // Erase by value
    s.erase(3);

    cout << "After Erasing 3: ";
    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Empty
    cout << "Is Empty: " << s.empty() << endl;

    return 0;
}
