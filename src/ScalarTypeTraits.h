/*
    ScalarTypeTraits.h
    ==================
        Class __ScalarTypeTraits header.
*/

#ifndef __EXPR_TMPL_SCALAR_TYPE_TRAITS_H
#define __EXPR_TMPL_SCALAR_TYPE_TRAITS_H

#include "Scalar.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Class __ScalarTypeTraits
////////////////////////////////////////////////////////////////////////////////

template <typename T>
struct __ScalarTypeTraits
{
    typedef const T &__Type;
};


template <typename T>
struct __ScalarTypeTraits<__Scalar<T>>
{
    typedef __Scalar<T> __Type;
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_SCALAR_TYPE_TRAITS_H
