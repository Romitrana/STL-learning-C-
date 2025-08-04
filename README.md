# Note On Standard template library

1. Unordered-set
   An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

SYNTAX: unordered_set<object_type> variable_name;

---When to Use unordered_set Over set:
When ordering doesn't matter
When you need faster access (average-case O(1))
When duplicates are not allowed
