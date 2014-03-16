#include "ConcreteDerived.h"

ConcreteDerived::ConcreteDerived(int val, double scale) : ConcreteBase(val), _scale(scale)
{
    cout << "\n\t\tConcreteDerived@" << this << "(" << val << ")";
}

ConcreteDerived::~ConcreteDerived()
{
    cout << "\n\t\t~ConcreteDerived@" << this << "()";
    _double = 0;
}
ConcreteDerived::ConcreteDerived(const ConcreteDerived& other)
{
    cout << "\n\t\tConcreteDerived@" << "(@" << &rhs << ")";
    _val = rhs._val;
    _scale = rhs._scale;
}

ConcreteDerived ConcreteDerived::operator=(const ConcreteDerived& other)
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
