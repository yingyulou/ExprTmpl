# ExprTmpl

## Introduction

The expression template implementation. For learning only.

To use this module, simply include the ```ExprTmpl``` herader file:

``` Cpp
#include <ExprTmpl/ExprTmpl>
```

All classes and functions are located under the namespace "ExprTmpl".

The library simply defined an 1-D array class ```Array``` for expression template:

``` Cpp
using ExprTmpl::Array;
```

## Constructor

The ```default constructor```, ```copy constructor```, ```fill constructor``` and the ```initializer_list constructor``` are available:

``` Cpp
// Default constructor
Array<int, 3> sampleArrayA;  // [?, ?, ?]

// Fill constructor
Array<int, 3> sampleArrayB(0);  // [0, 0, 0]

// initializer_list constructor
Array<int, 3> sampleArrayC {1, 2, 3};  // [1, 2, 3]

// Copy constructor
Array<int, 3> sampleArrayD(sampleArrayC);  // [1, 2, 3]
```

## Print

```ostream``` can be used to print the array:

``` Cpp
Array<int, 3> sampleArray {1, 2, 3};

cout << sampleArray << endl;  // [1, 2, 3]
```

## Operator

```Array``` support the: ```Array Operator Array```, ```Array Operator Scalar``` and the ```Scalar Operator Array``` expression. **But the expression will not be calculated until calling the ```operator<<``` or the ```operator=```:**

``` Cpp
Array<int, 3> arrayA {1, 2, 3}, arrayB {4, 5, 6}, resArray;

cout << arrayA << endl;    // [1, 2, 3]
cout << arrayB << endl;    // [4, 5, 6]
cout << resArray << endl;  // [?, ?, ?]

arrayA + arrayB;  // Do nothing!

cout << arrayA + arrayB << endl;  // [5, 7, 9]

resArray = 2 + arrayA + arrayB + 2;
cout << resArray << endl;  // [9, 11, 13]

resArray = 2 - arrayA - arrayB - 2;
cout << resArray << endl;  // [-5, -7, -9]

resArray = 2 * arrayA * arrayB * 2;
cout << resArray << endl;  // [16, 40, 72]

resArray = 200 / arrayB / arrayA / 2;
cout << resArray << endl;  // [25, 10, 5]

resArray = 17 % arrayA % arrayB % 5;
cout << resArray << endl;  // [0, 1, 2]
```
