/*
    Operator.h
    ==========
        Operator classes header.
*/

#ifndef __EXPR_TMPL_OPERATOR_H
#define __EXPR_TMPL_OPERATOR_H

#include "ScalarTypeTraits.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// class __Plus
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename LExpr, typename RExpr>
class __Plus
{
public:

    // Constructor
    __Plus(const LExpr &lhs, const RExpr &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] + __rhs[idx]; }


private:

    typename __ScalarTypeTraits<LExpr>::__Type __lhs;
    typename __ScalarTypeTraits<RExpr>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Minus
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename LExpr, typename RExpr>
class __Minus
{
public:

    // Constructor
    __Minus(const LExpr &lhs, const RExpr &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] - __rhs[idx]; }


private:

    typename __ScalarTypeTraits<LExpr>::__Type __lhs;
    typename __ScalarTypeTraits<RExpr>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Multiplies
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename LExpr, typename RExpr>
class __Multiplies
{
public:

    // Constructor
    __Multiplies(const LExpr &lhs, const RExpr &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] * __rhs[idx]; }


private:

    typename __ScalarTypeTraits<LExpr>::__Type __lhs;
    typename __ScalarTypeTraits<RExpr>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Divides
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename LExpr, typename RExpr>
class __Divides
{
public:

    // Constructor
    __Divides(const LExpr &lhs, const RExpr &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] / __rhs[idx]; }


private:

    typename __ScalarTypeTraits<LExpr>::__Type __lhs;
    typename __ScalarTypeTraits<RExpr>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Modulus
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename LExpr, typename RExpr>
class __Modulus
{
public:

    // Constructor
    __Modulus(const LExpr &lhs, const RExpr &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] % __rhs[idx]; }


private:

    typename __ScalarTypeTraits<LExpr>::__Type __lhs;
    typename __ScalarTypeTraits<RExpr>::__Type __rhs;
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_OPERATOR_H
