#include<iostream>
#include<vector>
using namespace std;


int main(){
    // Vector is a dynamic array

    vector<int> v; // Empty Vector
    v.push_back(1); // {1}
    v.push_back(2); // {1,2}
    v.emplace_back(3,4); // {1,2,3,4} - Emplace Back is faster than Push Back
    cout << "Vector Elements: ";

    vector<pair<int,int>> vp; // Vector of Pairs
    vp.push_back({1,2}); // {{1,2}}
    vp.emplace_back(3,4); // {{1,2},{3,4}}

    vector<int> v2(5,10); // {10,10,10,10,10} - Vector of size 5 with all elements as 10

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";

    }
    cout << endl;

    vector<int>v3(5); // {0,0,0,0,0} - Vector of size 5 with all elements as 0
    vector<int>::iterator it=v3.begin(); // Iterator pointing to the first element of the vector
    *it = 10; // {10,0,0,0,0}
    v3.push_back(20); // {10,0,0,0,0,20}

    v3.end(); // Iterator pointing to the position after the last element of the vector
    v3.begin(); // Iterator pointing to the first element of the vector

    v3.rend(); // Reverse Iterator pointing to the position before the first element of the vector
    v3.rbegin(); // Reverse Iterator pointing to the last element of the vector
    v3.erase(v3.begin()); // {0,0,0,0,20} - Erase the first element of the vector
    v3.erase(v3.begin(),v3.begin()+2); // {0,0,20} - Erase the first two elements of the vector
    v3.insert(v3.begin(),10); // {10,0,0,20} - Insert 10 at the beginning of the vector
    

return 0;
}
