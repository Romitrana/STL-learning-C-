# Note On Standard template library

# 1. unordered_set ✅

An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

SYNTAX: unordered_set<object_type> variable_name;

---When to Use unordered_set Over set:
When ordering doesn't matter
When you need faster access (average-case O(1))
When duplicates are not allowed

Functions in unordered set:

# insert()

- to insert an element in the unordered set.
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);

# begin()

- return an iterator pointing to the first element in the unordered set.
  s.begin();

# end()

- returns an iterator to the theoretical element after the last element.
  s.end();

# count()

- it returns 1 if the element is present in the container otherwise 0.

# find()

- to search an element in the unordered set.
  if(s.find(2)!=s.end())
  cout<<"true"<<endl;

# erase() - to delete a single element or elements between a particular range.

s.erase();

# size()

- returns the size of the unordered set.
  s.size();

# empty()

- to check if the unordered set is empty or not.
  s.empty();

# clear()

- to clear all element.

# cbegin()

– it refers to the first element of the unordered set.

# cend()

– it refers to the theoretical element after the last element of the unordered set.

# 2. Vector in C++ STL ✅

Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.

Syntax:
vector<object_type> variable_name;

# begin()

- it returns an iterator pointing to the first element of the vector.
  itr = v1.begin();

# end()

- it returns an iterator pointing to the element theoretically after the last element of the vector.
  itr = v1.end();

# push_back()

- it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);

# insert() - it is used to insert an element at a specified position.

auto it= v1.begin();
v1.insert(it,5); //inserting 5 at the beginning

# erase()

- it is used to delete a specific element
  v1.erase(it);// erasing the first element

# pop_back()

- it deletes the last element and returns it to the calling function.
  v1.pop_back();

# front()

- it returns a reference to the first element of the vector.
  v1.front();

# back()

- it returns a reference to the last element of the vector.

v1.back();

# clear()

- deletes all the elements from the vector.

v1.clear();

# empty()

- to check if the vector is empty or not.

v1.empty();

# size()

- returns the size of the vector

v1.size();

# reverse()

- reverse the vector (from algorithm headfile)

NOTE : ❌ No direct function like push_front() or pop_front() exists for vector

vector<int> v(5); // size = 5, all elements initialized to 0
Or:
vector<int> v(5, -1); // size = 5, all elements initialized to -1

- cbegin() - it refers to the first element of the vector.
- cend() - it refers to the theoretical element after the last element of the vector.
- rbegin() - it points to the last element of the vector.
- rend() - it points to the theoretical element before the first element of the vector.

# 3. Set in C++ STL ✅

A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.

set<object_type> variable_name;

Functions in set:

# insert()

– to insert an element in the set.
set<int> s;
s.insert(1);
s.insert(2);

# begin()

– return an iterator pointing to the first element in the set.
s.begin();

# end()

– returns an iterator to the theoretical element after the last element.
s.end();

# count()

– returns true or false based on whether the element is present in the set or not.
set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true

# clear()

– deletes all the elements in the set.
s.clear();

# find()

– to search an element in the set.
set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;

# erase()

– to delete a single element or elements between a particular range.
s.erase();

# size()

– returns the size of the set.
s.size();

# empty()

– to check if the set is empty or not.
s.empty();

# 4. unordered_set, but allows duplicate elements, and elements are stored in no particular order (hash-based).

> Key points about unordered_multiset

1. Duplicates allowed (unlike unordered_set).
2. Elements are unordered (fast average O(1) lookup, insert, erase).
3. Uses hash table internally.
4. Cannot store key-value pairs (use unordered_multimap for that).

5. Constructors & Assignment
   unordered_multiset() → creates an empty container.

unordered_multiset(initializer_list) → initializes with values.

unordered_multiset(first, last) → initializes from a range.

Copy / Move constructors: unordered_multiset(const&), unordered_multiset&&.

operator= → assign from another unordered_multiset or initializer list.

2. Iterators
   begin() / end() → forward iterators for all elements.

cbegin() / cend() → constant iterators.

begin(bucket) / end(bucket) → iterate over a specific bucket.

3. Capacity
   empty() → checks if container is empty.

size() → returns number of elements.

max_size() → maximum possible number of elements.

4. Modifiers
   insert(value) → insert a value (duplicates allowed).

insert(first, last) → insert a range.

insert(initializer_list) → insert list of values.

emplace(args...) → construct and insert in-place.

erase(key) → removes all occurrences of key.

erase(iterator) → removes element at iterator.

erase(first, last) → removes range of elements.

clear() → removes all elements.

swap(another) → swaps contents with another set.

5. Lookup
   find(key) → returns iterator to an element (or end() if not found).

count(key) → number of elements matching key.

equal_range(key) → returns pair of iterators for the range of key.
