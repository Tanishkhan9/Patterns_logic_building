#include<iostream>
#include<utility>
using namespace std;

int main(){

    // Pair stores two values together

    pair<int,int> p1 = {1,2};

    cout << p1.first << " " << p1.second << endl;

    // Nested Pair

    pair<int,pair<int,int>> p2 = {1,{2,3}};

    cout << p2.first << " "
         << p2.second.first << " "
         << p2.second.second << endl;

    // Array of Pairs

    pair<int,int> arr[] = {{1,2},{2,3},{3,4}};

    for(int i=0;i<3;i++){
        cout << arr[i].first << " "
             << arr[i].second << endl;
    }

    // Pair Swap

    pair<int,int> a = {10,20};
    pair<int,int> b = {30,40};
    cout<<"Before Swap:" << endl;
    cout << a.first << " " << a.second << endl;
    cout << b.first << " " << b.second << endl;

    swap(a,b);

    cout << "After Swap:" << endl;
    cout << a.first << " " << a.second << endl;
    cout << b.first << " " << b.second << endl;

    return 0;
}
