/*
    Scalar.h
    ========
        Class __Scalar header.
*/

#ifndef __EXPR_TMPL_SCALAR_H
#define __EXPR_TMPL_SCALAR_H

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Class __Scalar
////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __Scalar
{
public:

    // Constructor
    __Scalar(T val);


    // operator[]
    T operator[](int) const { return __val; }


private:

    // Attribute
    T __val;
};


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_SCALAR_H
