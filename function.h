#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include "Classes.h"

/// POINT 17
/// Demonstrates the difference between
/// a C++ class and a C++ struct
struct PixelStruct
{
    /// Default attributes are public
    int x;
    int y;
};
class PixelClass
{
    /// Attributes are private
    int x; /// no compile because x and y are private
    int y;
};

#endif // FUNCTION_H_INCLUDED
