using namespace std;

#include <stdexcept>

#include "IntVector.h"


IntVector::IntVector(unsigned int capacity, int value): _size(capacity), _capacity(capacity), _data(nullptr)
{

    if(capacity > 0)
    {
        _data = new int[capacity];

        for(unsigned int i = 0; i < capacity; i++)
        {

            _data[i] = value;

        }

    }

}

IntVector::~IntVector()
{

    delete[] _data;

}

unsigned int IntVector::size() const
{

    return _size;

}

unsigned int IntVector::capacity() const
{

    return _capacity;

}

bool IntVector::empty() const
{

    return size() == 0;

}

const int& IntVector::at(unsigned int index) const
{

    if(index >= size())
    {
        throw out_of_range("IntVector::at_range_check");
    }
    return _data[index];

}

const int& IntVector::front() const
{

    return _data[0];

}

const int& IntVector::back() const
{

    return _data[size()-1];

}

// All PROAS functions are below

    // Private Start //

void IntVector::expand()
{



    int* tempArr = new int[capacity()*2];
    _capacity = capacity() * 2;

    if(capacity() == 0)
    {

        _capacity = 1;

    }

    for(unsigned int i = 0; i < size(); i++)
    {

        tempArr[i] = _data[i];

    }

    delete[] _data;

    _data = tempArr;


}

void IntVector::expand(unsigned amount)
{

    int* tempArr = new int[amount];

    for(unsigned int i = 0; i < size(); i++)
    {

        tempArr[i] = _data[i];

    }

    delete[] _data;
    
    _data = tempArr;
    _capacity = amount;

}

    // Private End //



    // Public Start //

void IntVector::insert(unsigned index, int value)
{

    if(index > size())
    {

        throw out_of_range("IntVector::insert_range_check");

    }
    
    if(capacity() < size()+1)
    {

        expand();

    }


    for(unsigned int i = size(); i > index; i--)
    {

        _data[i] = _data[i-1];

    }

    _size += 1;
    _data[index] = value;

}

void IntVector::erase(unsigned index)
{

    if(index >= size())
    {

        throw out_of_range("IntVector::erase_range_check");

    }

    for(unsigned int i = index; i < size()-1; i++)
    {

        _data[i] = _data[i+1];

    }

    _size--;

}

int& IntVector::at(unsigned int index)
{

    if(index >= size())
    {
        throw out_of_range("IntVector::at_range_check");
    }
    return _data[index];

}

int & IntVector::front()
{

    return _data[0];

}

int & IntVector::back()
{

    return _data[size()-1];

}

void IntVector::assign(unsigned n, int value)
{

    if(n > _capacity)
    {
        if(capacity()*2 > n)
        {

            expand();

        }
        else
        {

            expand(n);

        }
    }

    _size = n;

    for(unsigned int i = 0; i < size(); i++)
    {

        _data[i] = value;

    }

}

void IntVector::push_back(int value)
{

    if(size() == capacity())
    {

        expand();

    }

    _data[size()] = value;
    _size++;

}

void IntVector::pop_back()
{

    _size--;

}

void IntVector::clear()
{

    _size = 0;

}

void IntVector::resize(unsigned n, int value)
{

    if(n < size())
    {

        _size = n;

        return;

    }
    else if(n > capacity())
    {

        if(capacity()*2 > n)
        {

            expand();

        }
        else
        {

            expand(n);

        }

    }

    for(unsigned int i = size(); i < capacity(); i++)
    {

        _data[i] = value;

    }

    _size = n;

}

void IntVector::reserve(unsigned n)
{

    if(n > capacity())
    {

        expand(n);

    }

}

    // Public End //
