STL Container and Container Adaptor Classes: 

The term first-class container, when applied to a container type, simply means that the container class has all the characteristics and behaviors that a user would expect of any data type, given the user's previous experience (with built-in data types, for example). The first-class containers include the vector, deque, list, map, multimap, set, and multiset classes.

The term container adaptor, on the other hand refers to an "adaptation" of one of the first-class containers by modifying and restricting its interface for some special purpose. These container adaptors include the stack and queue, which are based (by default) on the deque, as well as the priority_queue, which is based (by default) on the vector.

There are some other classes that are regarded as near-containers, in that (for example) they can be used with iterators, which makes them accessible to manipulation via the STL algorithms.

string

Not to be confused with the legacy C-string data type, inherited from the C-language, and consisting of a simple character array with the characters of interest terminated with a null character. The C++ string class is indeed a bona fide class, with much more flexibility (and safety) than the older C-string, and should probably be used anywhere the C-string is not explicitly required.

bitset

Provides a model for a fixed-size array of bits or boolean values, which is used to manage a set of "on-off switches" (or "flags") and where the state of a bitset object at any time will represent some combination of such flags (or on-off switches).

valarray

Provides a representation for the mathematical concept of a linear sequence of values and is designed to permit the efficient performance of certain numerical calculations. That having been said, some writers argue that the valarray class is poorly designed and that there are better alternatives if you wish to do serious numerical calculations in C++.
Note that for many purposes even "ordinary" C-style arrays (which are not classes) and C-strings (which are also not classes) can be accessed from the STL with C-style pointers in the same way that STL containers are accessed with STL iterators.
