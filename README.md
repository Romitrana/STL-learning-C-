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

NOTE : ❌ No direct function like push_front() or pop_front() exists for vector

vector<int> v(5); // size = 5, all elements initialized to 0
Or:
vector<int> v(5, -1); // size = 5, all elements initialized to -1
