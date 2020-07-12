/*
    Operator.hpp
    ============
        Operator classes implementation.
*/

#ifndef __EXPR_TMPL_OPERATOR_HPP
#define __EXPR_TMPL_OPERATOR_HPP

#include "Operator.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename L, typename R>
__Plus<T, L, R>::__Plus(const L &lhs, const R &rhs): __lhs(lhs), __rhs(rhs) {}


template <typename T, typename L, typename R>
__Minus<T, L, R>::__Minus(const L &lhs, const R &rhs): __lhs(lhs), __rhs(rhs) {}


template <typename T, typename L, typename R>
__Multiplies<T, L, R>::__Multiplies(const L &lhs, const R &rhs): __lhs(lhs), __rhs(rhs) {}


template <typename T, typename L, typename R>
__Divides<T, L, R>::__Divides(const L &lhs, const R &rhs): __lhs(lhs), __rhs(rhs) {}


template <typename T, typename L, typename R>
__Modulus<T, L, R>::__Modulus(const L &lhs, const R &rhs): __lhs(lhs), __rhs(rhs) {}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_OPERATOR_HPP
