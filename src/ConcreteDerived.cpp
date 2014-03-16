#include "ConcreteDerived.h"
#include <iostream>

using std::cout;

ConcreteDerived::ConcreteDerived(int val, double scale) : ConcreteBase(val), _scale(scale)
{
    cout << "\n\t\tConcreteDerived@" << this << "(" << val << ")";
}

ConcreteDerived::~ConcreteDerived()
{
    cout << "\n\t\t~ConcreteDerived@" << this << "()";
    _scale = 0;
}
ConcreteDerived::ConcreteDerived(const ConcreteDerived& other)
{
    cout << "\n\t\tConcreteDerived@" << "(@" << &other << ")";
    _val = other._val;
    _scale = other._scale;
}

ConcreteDerived& ConcreteDerived::operator=(const ConcreteDerived& rhs)
{
    cout << "\n\t\tConcreteDerived@" << this << " = @" << &rhs;
    // handle self assignment
    if (this == &rhs)
        return *this;
    // assignment operator
    _val = rhs._val;
    _scale = rhs._scale;
    return *this;
}
