/*
    Array.h
    =======
        Class Array header.
*/

#ifndef __EXPR_TMPL_ARRAY_H
#define __EXPR_TMPL_ARRAY_H

#include "Expression.h"

namespace ExprTmpl
{

////////////////////////////////////////////////////////////////////////////////
// Class Array
////////////////////////////////////////////////////////////////////////////////

template <typename T, int N>
using Array = __Expression<T, N, __Array<T, N>>;


}  // End namespace ExprTmpl


#endif  // __EXPR_TMPL_ARRAY_H
