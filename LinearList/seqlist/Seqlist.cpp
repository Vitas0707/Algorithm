#include "Seqlist.h"
#include <iostream>

template <typename T> // notice:you need to declare the template here and use it without the words"typename"in the definition
seqlist<T>::seqlist(T *dataptr, int n)
{
    if (n > maxsize)
        throw "invalid argument:length";
    for (int i = 0; i < n; i++)
    {
        data[i] = *dataptr;
        dataptr++;
    }
    length = n;
};

template <typename T>
seqlist<T>::seqlist()
{
    length = 0;
}

template <typename T>
seqlist<T>::~seqlist() {};

template <typename T>
int seqlist<T>::getlength()
{
    return length;
}

template <typename T>
int seqlist<T>::empty()
{
    if (length > 0)
        return 1;
    else
        return 0;
}

template <typename T>
T seqlist<T>::find(int i)
{
    if (i > length)
        throw "invalid location";
    else
        return data[i - 1];
    // notice:the location in list is the location in array plus 1
    // time complexity O(1)
}

template <typename T>
int seqlist<T>::locate(T x)
{
    if (length == 0)
        throw "here is an empty list";
    for (int i = 0; i < length; i++)
    {
        if (data[i] == x)
            return i + 1;
    }
    return 0; // fail to locate
    // average time complexity O(n)
}

template <typename T>
int seqlist<T>::insert(T x, int i)
{
    if (i < 0 || i > length + 1)
    { // motice:the insert location can be the last location
        throw "invalid insert location";
        return 1;
    };
    if (length == maxsize)
    {
        throw "the list is full";
        return 2;
    }
    /*approach:
    1.move all the element after the specified loacation
    2.insert the given element into the location
    be careful about the location and the number of the arrey
    */
    for (int j = length - 1; j >= i - 1; j--)
    {
        data[j + 1] = data[j];
    }
    data[i - 1] = x;
    length++; // remember the change of size
    return 0;
    // average time complexity n/2=O(n)
}

template <typename T>
int seqlist<T>::remove(int i)
{
    // notice:"delete"is a keyword in C++
    if (i < 0 || i > length)
        throw "invalid location";
    if (length == 0)
        throw "an empty list";
    /*
    approach:
    1.cover the element at specified location with the latter element
    */
    for (int j = i - 1; j < length; j++)
    {
        data[j] = data[j + 1];
    }
    length--; // remember the change of the size
    // average time complexity (n-1)/2 = O(n)
}

template <typename T>
void seqlist<T>::print()
{
    for (int i = 0; i < length; i++)
    {
        std::cout << data[i] << std::endl;
    }
}

// test code
//  int main(){
//      int data[3] = {1, 2, 3};
//      seqlist<int> l1(data, 3);
//      l1.print();
//      l1.insert(15, 2);
//      l1.print();
//  }
