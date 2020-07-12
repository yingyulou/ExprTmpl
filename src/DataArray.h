/*
    DataArray.h
    ===========
        Class __Array header.
*/

#ifndef __EXPR_TMPL_DATA_ARRAY_H
#define __EXPR_TMPL_DATA_ARRAY_H

#include <initializer_list>

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::initializer_list;


////////////////////////////////////////////////////////////////////////////////
// Class __Array
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N>
class __Array
{
public:

    // Constructor
    __Array();
    explicit __Array(const T &val);
    __Array(initializer_list<T> initializerList);


    // operator[]
    T &operator[](int idx) { return __data[idx]; }
    const T &operator[](int idx) const { return __data[idx]; }


private:

    // Attribute
    T __data[N];
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_DATA_ARRAY_H
