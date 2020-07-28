/*
    Expression.h
    ============
        Class __Expression header.
*/

#ifndef __EXPR_TMPL_Expression_H
#define __EXPR_TMPL_Expression_H

#include <initializer_list>
#include "DataArray.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::initializer_list;


////////////////////////////////////////////////////////////////////////////////
// Class __Expression
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N, typename Expr>
class __Expression
{
public:

    // Constructor
    __Expression();
    explicit __Expression(const T &val);
    __Expression(initializer_list<T> initializerList);
    __Expression(const Expr &expr);


    // operator[]
    T &operator[](int idx) { return __expr[idx]; }
    T operator[](int idx) const { return __expr[idx]; }


    // operator=
    template <typename RExpr>
    __Expression &operator=(const __Expression<T, N, RExpr> &rhs);


private:

    // Attribute
    Expr __expr;


// Friend

// operator+
template <typename T_, int N_, typename LExpr, typename RExpr>
friend inline __Expression<T_, N_, __Plus<T_, LExpr, RExpr>> operator+(
    const __Expression<T_, N_, LExpr> &lhs, const __Expression<T_, N_, RExpr> &rhs);


template <typename T_, int N_, typename LExpr>
friend inline __Expression<T_, N_, __Plus<T_, LExpr, __Scalar<T_>>> operator+(
    const __Expression<T_, N_, LExpr> &lhs, const T_ &rhs);


template <typename T_, int N_, typename RExpr>
friend inline __Expression<T_, N_, __Plus<T_, __Scalar<T_>, RExpr>> operator+(
    const T_ &lhs, const __Expression<T_, N_, RExpr> &rhs);


// operator-
template <typename T_, int N_, typename LExpr, typename RExpr>
friend inline __Expression<T_, N_, __Minus<T_, LExpr, RExpr>> operator-(
    const __Expression<T_, N_, LExpr> &lhs, const __Expression<T_, N_, RExpr> &rhs);


template <typename T_, int N_, typename LExpr>
friend inline __Expression<T_, N_, __Minus<T_, LExpr, __Scalar<T_>>> operator-(
    const __Expression<T_, N_, LExpr> &lhs, const T_ &rhs);


template <typename T_, int N_, typename RExpr>
friend inline __Expression<T_, N_, __Minus<T_, __Scalar<T_>, RExpr>> operator-(
    const T_ &lhs, const __Expression<T_, N_, RExpr> &rhs);


// operator*
template <typename T_, int N_, typename LExpr, typename RExpr>
friend inline __Expression<T_, N_, __Multiplies<T_, LExpr, RExpr>> operator*(
    const __Expression<T_, N_, LExpr> &lhs, const __Expression<T_, N_, RExpr> &rhs);


template <typename T_, int N_, typename LExpr>
friend inline __Expression<T_, N_, __Multiplies<T_, LExpr, __Scalar<T_>>> operator*(
    const __Expression<T_, N_, LExpr> &lhs, const T_ &rhs);


template <typename T_, int N_, typename RExpr>
friend inline __Expression<T_, N_, __Multiplies<T_, __Scalar<T_>, RExpr>> operator*(
    const T_ &lhs, const __Expression<T_, N_, RExpr> &rhs);


// operator/
template <typename T_, int N_, typename LExpr, typename RExpr>
friend inline __Expression<T_, N_, __Divides<T_, LExpr, RExpr>> operator/(
    const __Expression<T_, N_, LExpr> &lhs, const __Expression<T_, N_, RExpr> &rhs);


template <typename T_, int N_, typename LExpr>
friend inline __Expression<T_, N_, __Divides<T_, LExpr, __Scalar<T_>>> operator/(
    const __Expression<T_, N_, LExpr> &lhs, const T_ &rhs);


template <typename T_, int N_, typename RExpr>
friend inline __Expression<T_, N_, __Divides<T_, __Scalar<T_>, RExpr>> operator/(
    const T_ &lhs, const __Expression<T_, N_, RExpr> &rhs);


// operator%
template <typename T_, int N_, typename LExpr, typename RExpr>
friend inline __Expression<T_, N_, __Modulus<T_, LExpr, RExpr>> operator%(
    const __Expression<T_, N_, LExpr> &lhs, const __Expression<T_, N_, RExpr> &rhs);


template <typename T_, int N_, typename LExpr>
friend inline __Expression<T_, N_, __Modulus<T_, LExpr, __Scalar<T_>>> operator%(
    const __Expression<T_, N_, LExpr> &lhs, const T_ &rhs);


template <typename T_, int N_, typename RExpr>
friend inline __Expression<T_, N_, __Modulus<T_, __Scalar<T_>, RExpr>> operator%(
    const T_ &lhs, const __Expression<T_, N_, RExpr> &rhs);
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_Expression_H
