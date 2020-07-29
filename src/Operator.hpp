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

template <typename T, typename LExpr, typename RExpr>
__Plus<T, LExpr, RExpr>::__Plus(const LExpr &lhs, const RExpr &rhs):
    __lhs(lhs), __rhs(rhs) {}


template <typename T, typename LExpr, typename RExpr>
__Minus<T, LExpr, RExpr>::__Minus(const LExpr &lhs, const RExpr &rhs):
    __lhs(lhs), __rhs(rhs) {}


template <typename T, typename LExpr, typename RExpr>
__Multiplies<T, LExpr, RExpr>::__Multiplies(const LExpr &lhs, const RExpr &rhs):
    __lhs(lhs), __rhs(rhs) {}


template <typename T, typename LExpr, typename RExpr>
__Divides<T, LExpr, RExpr>::__Divides(const LExpr &lhs, const RExpr &rhs):
    __lhs(lhs), __rhs(rhs) {}


template <typename T, typename LExpr, typename RExpr>
__Modulus<T, LExpr, RExpr>::__Modulus(const LExpr &lhs, const RExpr &rhs):
    __lhs(lhs), __rhs(rhs) {}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_OPERATOR_HPP
