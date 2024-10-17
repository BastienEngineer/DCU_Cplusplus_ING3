#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "Classes.h"

/// POINT 18
/// Write a straightforward example class template
/// Class template
template<class T>
class test
{
private:
    T m_value;
public:
    test(const T& val= T());
    test(const test<T>& copy);
    const T& getConstVal() const;
};

/// Implementation of the the class template
template<class T>
test<T>::test(const T& val):m_value(val)
{

}
template<class T>
test<T>::test(const test<T>& copy):m_value(copy.getConstVal())
{

}
template<class T>
const T& test<T>::getConstVal() const
{
    return m_value;
}

#endif // TEST_H_INCLUDED
