/*
    Scalar.hpp
    ==========
        Class __Scalar implementation.
*/

#ifndef __EXPR_TMPL_SCALAR_HPP
#define __EXPR_TMPL_SCALAR_HPP

#include "Scalar.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename T>
__Scalar<T>::__Scalar(const T &val): __val(val) {}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_SCALAR_HPP
