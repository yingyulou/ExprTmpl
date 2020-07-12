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

template <typename T, typename L, typename R>
class __Plus
{
public:

    // Constructor
    __Plus(const L &lhs, const R &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] + __rhs[idx]; }


private:

    typename __ScalarTypeTraits<L>::__Type __lhs;
    typename __ScalarTypeTraits<R>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Minus
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename L, typename R>
class __Minus
{
public:

    // Constructor
    __Minus(const L &lhs, const R &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] - __rhs[idx]; }


private:

    typename __ScalarTypeTraits<L>::__Type __lhs;
    typename __ScalarTypeTraits<R>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Multiplies
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename L, typename R>
class __Multiplies
{
public:

    // Constructor
    __Multiplies(const L &lhs, const R &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] * __rhs[idx]; }


private:

    typename __ScalarTypeTraits<L>::__Type __lhs;
    typename __ScalarTypeTraits<R>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Divides
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename L, typename R>
class __Divides
{
public:

    // Constructor
    __Divides(const L &lhs, const R &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] / __rhs[idx]; }


private:

    typename __ScalarTypeTraits<L>::__Type __lhs;
    typename __ScalarTypeTraits<R>::__Type __rhs;
};


////////////////////////////////////////////////////////////////////////////////
// class __Modulus
////////////////////////////////////////////////////////////////////////////////

template <typename T, typename L, typename R>
class __Modulus
{
public:

    // Constructor
    __Modulus(const L &lhs, const R &rhs);

    // operator[]
    T operator[](int idx) const { return __lhs[idx] % __rhs[idx]; }


private:

    typename __ScalarTypeTraits<L>::__Type __lhs;
    typename __ScalarTypeTraits<R>::__Type __rhs;
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_OPERATOR_H
