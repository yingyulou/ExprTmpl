/*
    Array.h
    =======
        Class Array header.
*/

#ifndef __EXPR_TMPL_ARRAY_H
#define __EXPR_TMPL_ARRAY_H

#include <initializer_list>
#include "DataArray.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::initializer_list;


////////////////////////////////////////////////////////////////////////////////
// Class Array
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N, typename Expr = __Array<T, N>>
class Array
{
public:

    // Constructor
    Array();
    explicit Array(const T &val);
    Array(initializer_list<T> initializerList);
    Array(const Expr &expr);


    // operator[]
    T &operator[](int idx) { return __expr[idx]; }
    T operator[](int idx) const { return __expr[idx]; }


    // operator=
    template <typename RhsExpr>
    Array &operator=(const Array<T, N, RhsExpr> &rhs);


private:

    // Attribute
    Expr __expr;


// Friend

// operator+
template <typename __T, int __N, typename __LhsExpr, typename __RhsExpr>
friend inline Array<__T, __N, __Plus<__T, __LhsExpr, __RhsExpr>> operator+(
    const Array<__T, __N, __LhsExpr> &lhs, const Array<__T, __N, __RhsExpr> &rhs);


template <typename __T, int __N, typename LhsExpr>
friend inline Array<__T, __N, __Plus<__T, LhsExpr, __Scalar<__T>>> operator+(
    const Array<__T, __N, LhsExpr> &lhs, const __T &rhs);


template <typename __T, int __N, typename RhsExpr>
friend inline Array<__T, __N, __Plus<__T, __Scalar<__T>, RhsExpr>> operator+(
    const __T &lhs, const Array<__T, __N, RhsExpr> &rhs);


// operator-
template <typename __T, int __N, typename __LhsExpr, typename __RhsExpr>
friend inline Array<__T, __N, __Minus<__T, __LhsExpr, __RhsExpr>> operator-(
    const Array<__T, __N, __LhsExpr> &lhs, const Array<__T, __N, __RhsExpr> &rhs);


template <typename __T, int __N, typename LhsExpr>
friend inline Array<__T, __N, __Minus<__T, LhsExpr, __Scalar<__T>>> operator-(
    const Array<__T, __N, LhsExpr> &lhs, const __T &rhs);


template <typename __T, int __N, typename RhsExpr>
friend inline Array<__T, __N, __Minus<__T, __Scalar<__T>, RhsExpr>> operator-(
    const __T &lhs, const Array<__T, __N, RhsExpr> &rhs);


// operator*
template <typename __T, int __N, typename __LhsExpr, typename __RhsExpr>
friend inline Array<__T, __N, __Multiplies<__T, __LhsExpr, __RhsExpr>> operator*(
    const Array<__T, __N, __LhsExpr> &lhs, const Array<__T, __N, __RhsExpr> &rhs);


template <typename __T, int __N, typename LhsExpr>
friend inline Array<__T, __N, __Multiplies<__T, LhsExpr, __Scalar<__T>>> operator*(
    const Array<__T, __N, LhsExpr> &lhs, const __T &rhs);


template <typename __T, int __N, typename RhsExpr>
friend inline Array<__T, __N, __Multiplies<__T, __Scalar<__T>, RhsExpr>> operator*(
    const __T &lhs, const Array<__T, __N, RhsExpr> &rhs);


// operator/
template <typename __T, int __N, typename __LhsExpr, typename __RhsExpr>
friend inline Array<__T, __N, __Divides<__T, __LhsExpr, __RhsExpr>> operator/(
    const Array<__T, __N, __LhsExpr> &lhs, const Array<__T, __N, __RhsExpr> &rhs);


template <typename __T, int __N, typename LhsExpr>
friend inline Array<__T, __N, __Divides<__T, LhsExpr, __Scalar<__T>>> operator/(
    const Array<__T, __N, LhsExpr> &lhs, const __T &rhs);


template <typename __T, int __N, typename RhsExpr>
friend inline Array<__T, __N, __Divides<__T, __Scalar<__T>, RhsExpr>> operator/(
    const __T &lhs, const Array<__T, __N, RhsExpr> &rhs);


// operator%
template <typename __T, int __N, typename __LhsExpr, typename __RhsExpr>
friend inline Array<__T, __N, __Modulus<__T, __LhsExpr, __RhsExpr>> operator%(
    const Array<__T, __N, __LhsExpr> &lhs, const Array<__T, __N, __RhsExpr> &rhs);


template <typename __T, int __N, typename LhsExpr>
friend inline Array<__T, __N, __Modulus<__T, LhsExpr, __Scalar<__T>>> operator%(
    const Array<__T, __N, LhsExpr> &lhs, const __T &rhs);


template <typename __T, int __N, typename RhsExpr>
friend inline Array<__T, __N, __Modulus<__T, __Scalar<__T>, RhsExpr>> operator%(
    const __T &lhs, const Array<__T, __N, RhsExpr> &rhs);
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_ARRAY_H
