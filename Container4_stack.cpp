#include<iostream>
#include<stack>
// STL library for Stack Data Structure
#include<utility> // for swap()

using namespace std;

int main(){

    stack<int> st;

    // Check if stack is empty
    cout << "Is Stack Empty? " << st.empty() << endl;

    // Inserting elements
    st.push(1);
    st.push(2);
    st.emplace(3);

    // Accessing top element
    cout << "Top Element: " << st.top() << endl;

    // Size of stack
    cout << "Size: " << st.size() << endl;

    // Check empty status
    cout << "Is Stack Empty? " << st.empty() << endl;

    // Remove top element
    st.pop();
    cout << "Top after pop(): " << st.top() << endl;

    // Another stack
    stack<int> st2;
    st2.push(100);
    st2.push(200);

    // Swap stacks
    st.swap(st2);

    cout << "Top of st after swap: " << st.top() << endl;
    cout << "Top of st2 after swap: " << st2.top() << endl;

    // Create a copy of stack
stack<int> st3(st);

// Number of elements
cout << "Size of st3: " << st3.size() << endl;

// Print all elements (using a copy)
cout << "Elements of st3: ";
while(!st3.empty()){
    cout << st3.top() << " ";
    st3.pop();
}
cout << endl;

    return 0;
}


/*

Stack follows LIFO (Last In First Out)

Common Operations:
push()    - Insert element
emplace() - Insert element efficiently
pop()     - Remove top element
top()     - Access top element
size()    - Number of elements
empty()   - Check if stack is empty
swap()    - Swap two stacks
*/
