/*
    __Expression.hpp
    =========
        Class __Expression implementation.
*/

#ifndef __EXPR_TMPL_Expression_HPP
#define __EXPR_TMPL_Expression_HPP

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

template <typename T, int N, typename Expr>
__Expression<T, N, Expr>::__Expression() = default;


template <typename T, int N, typename Expr>
__Expression<T, N, Expr>::__Expression(const T &val): __expr(val) {}


template <typename T, int N, typename Expr>
__Expression<T, N, Expr>::__Expression(initializer_list<T> initializerList): __expr(initializerList) {}


template <typename T, int N, typename Expr>
__Expression<T, N, Expr>::__Expression(const Expr &expr): __expr(expr) {}


////////////////////////////////////////////////////////////////////////////////
// operator=
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N, typename Expr>
template <typename RhsExpr>
__Expression<T, N, Expr> &__Expression<T, N, Expr>::operator=(
    const __Expression<T, N, RhsExpr> &rhs)
{
    for (int idx = 0; idx < N; idx++)
    {
        __expr[idx] = rhs[idx];
    }

    return *this;
}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_Expression_HPP
