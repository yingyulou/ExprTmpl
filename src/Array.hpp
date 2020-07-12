/*
    Array.hpp
    =========
        Class Array implementation.
*/

#ifndef __EXPR_TMPL_ARRAY_HPP
#define __EXPR_TMPL_ARRAY_HPP

#include <initializer_list>
#include "Array.h"

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
Array<T, N, Expr>::Array() = default;


template <typename T, int N, typename Expr>
Array<T, N, Expr>::Array(const T &val): __expr(val) {}


template <typename T, int N, typename Expr>
Array<T, N, Expr>::Array(initializer_list<T> initializerList): __expr(initializerList) {}


template <typename T, int N, typename Expr>
Array<T, N, Expr>::Array(const Expr &expr): __expr(expr) {}


////////////////////////////////////////////////////////////////////////////////
// operator=
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N, typename Expr>
template <typename RhsExpr>
Array<T, N, Expr> &Array<T, N, Expr>::operator=(const Array<T, N, RhsExpr> &rhs)
{
    for (int idx = 0; idx < N; idx++)
    {
        __expr[idx] = rhs[idx];
    }

    return *this;
}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_ARRAY_HPP
