1. Vector
Definition

A dynamic array that can grow or shrink automatically. Elements are stored in contiguous memory.

Common Functions
push_back()
pop_back()
size()
empty()
front()
back()
at()
clear()
insert()
erase()
begin()
end()
rbegin()
rend()
swap()

2. Pair
Definition

Stores exactly two values which may be of different data types.

Common Members
first
second
make_pair()

3. Tuple
Definition

Stores multiple values of different data types together.

Common Functions
get<index>()
make_tuple()
tuple_size<>
tie()

4. Deque
Definition

Double Ended Queue that allows insertion and deletion from both ends.

Common Functions
push_back()
push_front()
pop_back()
pop_front()
front()
back()
at()
size()
empty()
clear()
begin()
end()
insert()
erase()

5. List
Definition

Doubly Linked List allowing efficient insertion and deletion.

Common Functions
push_back()
push_front()
pop_back()
pop_front()
front()
back()
remove()
reverse()
sort()
unique()
merge()
splice()
size()
empty()
clear()

6. Forward List
Definition

Singly Linked List with less memory usage than list.

Common Functions
push_front()
pop_front()
insert_after()
erase_after()
remove()
reverse()
sort()
merge()
clear()
empty()

7. Stack
Definition

LIFO (Last In First Out) data structure.

Common Functions
push()
pop()
top()
size()
empty()
swap()

8. Queue
Definition

FIFO (First In First Out) data structure.

Common Functions
push()
pop()
front()
back()
size()
empty()
swap()

9. Priority Queue
Definition

Heap-based container where highest (or lowest) priority element remains on top.

Common Functions
push()
pop()
top()
size()
empty()
swap()

10. Set
Definition

Stores unique elements in sorted order.

Common Functions
insert()
emplace()
erase()
find()
count()
lower_bound()
upper_bound()
size()
empty()
clear()
begin()
end()
rbegin()
rend()
swap()

11. Multiset
Definition

Stores duplicate elements in sorted order.

Common Functions
insert()
emplace()
erase()
find()
count()
equal_range()
lower_bound()
upper_bound()
size()
empty()
clear()
begin()
end()
rbegin()
rend()
swap()

12. Unordered Set
Definition

Stores unique elements using Hash Table. No ordering.

Common Functions
insert()
emplace()
erase()
find()
count()
size()
empty()
clear()
begin()
end()
bucket_count()
load_factor()
rehash()

13. Unordered Multiset
Definition

Stores duplicate elements using Hash Table. No ordering.

Common Functions
insert()
emplace()
erase()
find()
count()
equal_range()
size()
empty()
clear()
begin()
end()
rehash()

14. Map
Definition

Stores key-value pairs with unique keys in sorted order.

Common Functions
insert()
emplace()
find()
count()
erase()
lower_bound()
upper_bound()
at()
size()
empty()
clear()
begin()
end()
rbegin()
rend()
operator[]

15. Multimap
Definition

Stores key-value pairs with duplicate keys allowed.

Common Functions
insert()
emplace()
find()
count()
erase()
equal_range()
lower_bound()
upper_bound()
size()
empty()
clear()
begin()
end()
rbegin()
rend()

16. Unordered Map
Definition

Stores key-value pairs using Hash Table. Unique keys.

Common Functions
insert()
emplace()
find()
count()
erase()
at()
size()
empty()
clear()
begin()
end()
operator[]
bucket_count()
load_factor()
rehash()

17. Unordered Multimap
Definition

Stores key-value pairs using Hash Table. Duplicate keys allowed.

Common Functions
insert()
emplace()
find()
count()
erase()
equal_range()
size()
empty()
clear()
begin()
end()
bucket_count()
load_factor()
rehash()

Important STL Algorithms (#include <algorithm>)
Sorting & Searching
sort()
stable_sort()
binary_search()
find()
find_if()
count()
count_if()
lower_bound()
upper_bound()
equal_range()
Min / Max
max()
min()
max_element()
min_element()
Rearrangement
reverse()
rotate()
swap()
swap_ranges()
next_permutation()
prev_permutation()
Numeric
accumulate()
partial_sum()
iota()
Useful Utility Functions
distance()
advance()
next()
prev()
