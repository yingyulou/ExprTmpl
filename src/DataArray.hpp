/*
    DataArray.hpp
    =============
        Class __Array implementation.
*/

#ifndef __EXPR_TMPL_DATA_ARRAY_HPP
#define __EXPR_TMPL_DATA_ARRAY_HPP

#include <initializer_list>
#include "DataArray.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::initializer_list;


////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N>
__Array<T, N>::__Array() = default;


template <typename T, int N>
__Array<T, N>::__Array(const T &val)
{
    for (int idx = 0; idx < N; idx++)
    {
        __data[idx] = val;
    }
}


template <typename T, int N>
__Array<T, N>::__Array(initializer_list<T> initializerList)
{
    int idx = 0;

    for (auto &val: initializerList)
    {
        __data[idx++] = val;
    }
}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_DATA_ARRAY_HPP
