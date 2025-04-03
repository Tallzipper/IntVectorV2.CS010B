#ifndef __IntVector__
#define __IntVector__

/*
 ProAs =    Programming Assignment. 
            I ususally like making the first
            three letters of each word...
            I am unable to in this case

*/

using namespace std;

class IntVector
{
    private:
    unsigned int _size;                                     // Stores amount of actual elements in array | Done
    unsigned int _capacity;                                 // Stores array size | Done
    int *_data;                                             // Pointer for dynamically allocated array of intergers | Done

    // ProAs private below

    void expand();                                          // Double the capacity of the vector. Ensure no dangling pointers | Maybe
    void expand(unsigned amount);                           // Make the function as big as 'amount' says to | Maybe

    public:
    IntVector(unsigned int capacity = 0, int value = 0);    // Constructor | Done
    ~IntVector();                                           // Destructor | Done
    unsigned size() const;                                  // Returns the array size (Actual inputs) | Done
    unsigned capacity() const;                              // Returns array capacity | Done
    bool empty() const;                                     // Returns true if array is empty | Done
    const int& at(unsigned int index) const;                // Returns the value stored at that exact index | Done
    const int& front() const;                               // Returns the value stored at index 0 | Done
    const int& back() const;                                // Returns value stored at the last value (Using .back) | Done

    // ProAs public below

    void insert(unsigned index, int value);                 // Inserts 'value' into 'index'. Increase size. | DOne
    void erase(unsigned index);                             // Removes the value at 'index'. Decreases size. | Done
    int & at(unsigned int index);                           // Returns the value stored at that exact index | Done
    int & front();                                          // Returns the value stored at index 0 | Done
    int & back();                                           // Returns value stored at the last value (Using .back) | Done
    void assign(unsigned n, int value);                     // What? | Kills the entire vector. New size is 'n' and all values are 'value' | N
    void push_back(int value);                              // Adds a new value to end of array | Done
    void pop_back();                                        // Just decrease the size by 1 | Done
    void clear();                                           // Size of Vector is now 0 | Done
    void resize(unsigned n, int value = 0);                 // Resizes the vector to contain 'size' elements. Use expand | Done
    void reserve(unsigned n);                               // If 'n' is larger than the current capacity then the capacity should be expanded to 'n'. | Done

};

#endif


