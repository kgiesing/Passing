#include "ConcreteBase.h"
#include <iostream>

using std::cout;

ConcreteBase::ConcreteBase(int val) : _val(val)
{
    cout << "\n\t\t" << *this << "(" << val << ")";
}

ConcreteBase::~ConcreteBase()
{
    cout << "\n\t\t~" << *this << "()";
    _val = 0;
}

ConcreteBase::ConcreteBase(const ConcreteBase& other)
{
    cout << "\n\t\t" << *this << "(" << other << ")";
    _val = other._val;
}

ConcreteBase& ConcreteBase::operator=(const ConcreteBase& rhs)
{
    cout << "\n\t\t" << *this << " = " << rhs;
    // handle self assignment
    if (this == &rhs)
        return *this;
    // assignment operator
    _val = rhs._val;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const ConcreteBase& v)
{
    out << "ConcreteBase@" << &v << ":" << v._val;
    return out;
}
