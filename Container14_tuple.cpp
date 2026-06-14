#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    // TUPLE
    // -------------------------------------
    // 1. Stores multiple values together.
    // 2. Can store different data types.
    // 3. Similar to pair but can hold
    //    more than two values.
    // 4. Values are accessed using get<>()
    //
    // Useful when a function needs to
    // return multiple values.

    tuple<int,string,float> student;

    // Assign values to tuple
    student = {101, "Tanish", 8.75};

    // Tuple contains:
    // Roll No = 101
    // Name    = Tanish
    // CGPA    = 8.75

    cout << "Student Details\n";

    // Access first element
    cout << "Roll No : "
         << get<0>(student) << endl;

    // Access second element
    cout << "Name    : "
         << get<1>(student) << endl;

    // Access third element
    cout << "CGPA    : "
         << get<2>(student) << endl;

    // Number of elements in tuple
    cout << "\nTuple Size = "
         << tuple_size<decltype(student)>::value
         << endl;

    // Creating another tuple

    tuple<int,char,double,string> t;

    t = {1,'A',99.5,"C++"};

    cout << "\nAnother Tuple:\n";

    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;
    cout << get<3>(t) << endl;

    return 0;
}
