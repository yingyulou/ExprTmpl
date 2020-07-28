/*
    OperatorOverloading.hpp
    =======================
        Operator overloadings implementation.
*/

#ifndef __EXPR_TMPL_OPERATOR_OVERLOADING_HPP
#define __EXPR_TMPL_OPERATOR_OVERLOADING_HPP

#include <iostream>
#include "Expression.h"
#include "Scalar.h"
#include "Operator.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::ostream;


////////////////////////////////////////////////////////////////////////////////
// operator+
////////////////////////////////////////////////////////////////////////////////

// __Expression + __Expression
template <typename T, int N, typename LExpr, typename RExpr>
inline __Expression<T, N, __Plus<T, LExpr, RExpr>> operator+(
    const __Expression<T, N, LExpr> &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Plus<T, LExpr, RExpr>>(
        __Plus<T, LExpr, RExpr>(lhs.__expr, rhs.__expr));
}


// __Expression + __Scalar
template <typename T, int N, typename LExpr>
inline __Expression<T, N, __Plus<T, LExpr, __Scalar<T>>> operator+(
    const __Expression<T, N, LExpr> &lhs, const T &rhs)
{
    return __Expression<T, N, __Plus<T, LExpr, __Scalar<T>>>(
        __Plus<T, LExpr, __Scalar<T>>(lhs.__expr, __Scalar<T>(rhs)));
}


// __Scalar + __Expression
template <typename T, int N, typename RExpr>
inline __Expression<T, N, __Plus<T, __Scalar<T>, RExpr>> operator+(
    const T &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Plus<T, __Scalar<T>, RExpr>>(
        __Plus<T, __Scalar<T>, RExpr>(__Scalar<T>(lhs), rhs.__expr));
}


////////////////////////////////////////////////////////////////////////////////
// operator-
////////////////////////////////////////////////////////////////////////////////

// __Expression - __Expression
template <typename T, int N, typename LExpr, typename RExpr>
inline __Expression<T, N, __Minus<T, LExpr, RExpr>> operator-(
    const __Expression<T, N, LExpr> &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Minus<T, LExpr, RExpr>>(
        __Minus<T, LExpr, RExpr>(lhs.__expr, rhs.__expr));
}


// __Expression - __Scalar
template <typename T, int N, typename LExpr>
inline __Expression<T, N, __Minus<T, LExpr, __Scalar<T>>> operator-(
    const __Expression<T, N, LExpr> &lhs, const T &rhs)
{
    return __Expression<T, N, __Minus<T, LExpr, __Scalar<T>>>(
        __Minus<T, LExpr, __Scalar<T>>(lhs.__expr, __Scalar<T>(rhs)));
}


// __Scalar - __Expression
template <typename T, int N, typename RExpr>
inline __Expression<T, N, __Minus<T, __Scalar<T>, RExpr>> operator-(
    const T &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Minus<T, __Scalar<T>, RExpr>>(
        __Minus<T, __Scalar<T>, RExpr>(__Scalar<T>(lhs), rhs.__expr));
}


////////////////////////////////////////////////////////////////////////////////
// operator*
////////////////////////////////////////////////////////////////////////////////

// __Expression * __Expression
template <typename T, int N, typename LExpr, typename RExpr>
inline __Expression<T, N, __Multiplies<T, LExpr, RExpr>> operator*(
    const __Expression<T, N, LExpr> &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Multiplies<T, LExpr, RExpr>>(
        __Multiplies<T, LExpr, RExpr>(lhs.__expr, rhs.__expr));
}


// __Expression * __Scalar
template <typename T, int N, typename LExpr>
inline __Expression<T, N, __Multiplies<T, LExpr, __Scalar<T>>> operator*(
    const __Expression<T, N, LExpr> &lhs, const T &rhs)
{
    return __Expression<T, N, __Multiplies<T, LExpr, __Scalar<T>>>(
        __Multiplies<T, LExpr, __Scalar<T>>(lhs.__expr, __Scalar<T>(rhs)));
}


// __Scalar * __Expression
template <typename T, int N, typename RExpr>
inline __Expression<T, N, __Multiplies<T, __Scalar<T>, RExpr>> operator*(
    const T &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Multiplies<T, __Scalar<T>, RExpr>>(
        __Multiplies<T, __Scalar<T>, RExpr>(__Scalar<T>(lhs), rhs.__expr));
}


////////////////////////////////////////////////////////////////////////////////
// operator/
////////////////////////////////////////////////////////////////////////////////

// __Expression / __Expression
template <typename T, int N, typename LExpr, typename RExpr>
inline __Expression<T, N, __Divides<T, LExpr, RExpr>> operator/(
    const __Expression<T, N, LExpr> &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Divides<T, LExpr, RExpr>>(
        __Divides<T, LExpr, RExpr>(lhs.__expr, rhs.__expr));
}


// __Expression / __Scalar
template <typename T, int N, typename LExpr>
inline __Expression<T, N, __Divides<T, LExpr, __Scalar<T>>> operator/(
    const __Expression<T, N, LExpr> &lhs, const T &rhs)
{
    return __Expression<T, N, __Divides<T, LExpr, __Scalar<T>>>(
        __Divides<T, LExpr, __Scalar<T>>(lhs.__expr, __Scalar<T>(rhs)));
}


// __Scalar / __Expression
template <typename T, int N, typename RExpr>
inline __Expression<T, N, __Divides<T, __Scalar<T>, RExpr>> operator/(
    const T &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Divides<T, __Scalar<T>, RExpr>>(
        __Divides<T, __Scalar<T>, RExpr>(__Scalar<T>(lhs), rhs.__expr));
}


////////////////////////////////////////////////////////////////////////////////
// operator%
////////////////////////////////////////////////////////////////////////////////

// __Expression % __Expression
template <typename T, int N, typename LExpr, typename RExpr>
inline __Expression<T, N, __Modulus<T, LExpr, RExpr>> operator%(
    const __Expression<T, N, LExpr> &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Modulus<T, LExpr, RExpr>>(
        __Modulus<T, LExpr, RExpr>(lhs.__expr, rhs.__expr));
}


// __Expression % __Scalar
template <typename T, int N, typename LExpr>
inline __Expression<T, N, __Modulus<T, LExpr, __Scalar<T>>> operator%(
    const __Expression<T, N, LExpr> &lhs, const T &rhs)
{
    return __Expression<T, N, __Modulus<T, LExpr, __Scalar<T>>>(
        __Modulus<T, LExpr, __Scalar<T>>(lhs.__expr, __Scalar<T>(rhs)));
}


// __Scalar % __Expression
template <typename T, int N, typename RExpr>
inline __Expression<T, N, __Modulus<T, __Scalar<T>, RExpr>> operator%(
    const T &lhs, const __Expression<T, N, RExpr> &rhs)
{
    return __Expression<T, N, __Modulus<T, __Scalar<T>, RExpr>>(
        __Modulus<T, __Scalar<T>, RExpr>(__Scalar<T>(lhs), rhs.__expr));
}


////////////////////////////////////////////////////////////////////////////////
// operator<<
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N, typename Expr>
ostream &operator<<(ostream &os, const __Expression<T, N, Expr> &expressionObj)
{
    os << '[';

    if (N)
    {
        os << expressionObj[0];

        for (int idx = 1; idx < N; idx++)
        {
            os << ", " << expressionObj[idx];
        }
    }

    os << ']';

    return os;
}


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_OPERATOR_OVERLOADING_HPP
