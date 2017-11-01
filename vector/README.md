Vectors

std::vector
template < class T, class Alloc = allocator<T> > class vector; // generic template

(Reference: http://www.bogotobogo.com/cplusplus/stl_vector_list.php)
Vectors are sequence containers representing arrays that can change in size. 
A vector manages its elements in a dynamic array. It enables random access, which means we can access each element directly with index.

Appending and removing elements at the end of the array is very fast. But inserting an element in the middle or at the beginning of the array takes time because all the following elements should be moved to make room for it while maintaining the order.


Vector - Performance
Vectors grow dynamically, and every vector has a specific size. When we add a new element to a vector, the computer reallocates memory and may even copy all of the vector elements into this new memory, and this can cause a performance hit.


capacity()
The capacity() returns the capacity of a vector (the number of elements that a vector can hold before a program must allocate more memory for it). So, a vector's capacity is not the same thing as its size which is the number of elements a vector currently holds. In short, capacity() is the size of the container and the size() is the currently filled level. The capacity() is always equal to or larger than the size. The difference between them is the number of elements that we can add to the vector before the array under the hood needs to be reallocated.


reserve()
Before we look into the reserve() we need to know what's happening whenever a vector needs more space. It's doing similar to realloc operation. New memory allocation, copy from the old to the new, destruct old objects, deallocate old memory, invalidation of iterators. It's expensive!
The reserve() increases the capacity of a vector to the number supplied as an argument. The reserve() gives us control over when a reallocation of additional memory occurs.
By using reserve() to keep a vector's capacity large enough for our purposes, we can delay memory reallocation.

Vector vs List

vector

1. Contiguous memory.
2. Pre-allocates space for future elements, so extra space may be required.
3. Unlike a list where additional space for a pointer is needed, each element only requires the space for the element type itself.
4. Can re-allocate memory for the entire vector at any time that we add an element.
5. Insertions at the end are constant, but insertions elsewhere are a costly O(n).
6. Erasing an element at the end of the vector is constant time, but for the other locations it's O(n).
7. We can randomly access its elements.
8. Iterators, pointers, and references are invalidated if we add or remove elements to or from the vector.
9. vector::iterator it = v.begin();
	for(it = v.begin(); it != v.end(); ++it) {
    		if(*it == 5) v.erase(it);
	}
   so, after the *it == 5, this may crash.
10. We can easily get at the underlying array if we need an array of the elements:
	vector<int> v;
	for(int i = 0; i < 10; ++i) v.push_back(i);
		int *a = &v;[0];
11. vector is very similar to the array, so the following line is true:
	&v;[i] == &v;[0] + i;


list

1. Non-contiguous memory.
2. No pre-allocated memory. The memory overhead for the list itself is constant.
3. Each element requires extra space for the node which holds the element, including pointers to the next and previous elements in the list.
4. Never has to re-allocate memory for the whole list just because we add an element.
5. Insertions and erasures are cheap no matter where in the list they occur.
6. It's cheap to combine lists with splicing.
7. We cannot randomly access elements, so getting at a particular element in the list can be expensive.
8. Iterators remain valid even when we add or remove elements from the list.
9. If we need an array of the elements, we'll have to create a new one and add them all to it, since there is no underlying array.

Instuctions to compile and run the program:

g++ -std=c++11 -o Vector Vector.cpp
./Vector 
