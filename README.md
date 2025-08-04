# Note On Standard template library

# 1. Unordered-set

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
