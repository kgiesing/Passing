#include "ConcreteBase.h"
#include <iostream>

using std::cout;

ConcreteBase::ConcreteBase(int val) : _val(val)
{
    cout << "\n\t\tConcreteBase@" << this << "(" << val << ")";
}

ConcreteBase::~ConcreteBase()
{
    cout << "\n\t\t~ConcreteBase@" << this << "()";
    _val = 0;
}

ConcreteBase::ConcreteBase(const ConcreteBase& other)
{
    cout << "\n\t\tConcreteBase@" << "(@" << &rhs << ")";
    _val = rhs._val;
}

ConcreteBase& ConcreteBase::operator=(const ConcreteBase& rhs)
{
    cout << "\n\t\tConcreteBase@" << this << " = @" << &rhs;
    // handle self assignment
    if (this == &rhs)
        return *this;
    // assignment operator
    _val = rhs._val;
    return *this;
}
