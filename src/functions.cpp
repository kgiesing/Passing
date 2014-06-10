#include "../include/functions.h"
#include <iostream>

using std::cout;

void passBaseByPointer(ConcreteBase* p)
{
    cout << "\n\tpassBaseByPointer(*" << *p << ")";
    cout << "\n\tCalling getVal():"
         << p->getVal();
    cout << "\n\tAssigning object with value of 'P':";
    p = &ConcreteBase('P');
    cout << "\n\tReturning...";
}

void passDerivedByPointer(ConcreteDerived* p)
{
    cout << "\n\tpassDerivedByPointer(*" << *p << ")";
    cout << "\n\tCalling getVal():"
         << p->getVal();
    cout << "\n\tAssigning object with value of 'P', scale of 0.5:";
    p = &ConcreteDerived('P', 0.5);
    cout << "\n\tReturning...";
}

void passBaseByReference(ConcreteBase& r)
{
    cout << "\n\tpassBaseByReference(&" << r << ")";
    cout << "\n\tCalling getVal():"
         << r.getVal();
    cout << "\n\tAssigning object with value of 'R':";
    r = ConcreteBase('R');
    cout << "\n\tReturning...";
}

void passDerivedByReference(ConcreteDerived& r)
{
    cout << "\n\tpassDerivedByReference(&" << r << ")";
    cout << "\n\tCalling getVal():"
         << r.getVal();
    cout << "\n\tAssigning object with value of 'R', scale of 0.5:";
    r = ConcreteDerived('P', 0.5);
    cout << "\n\tReturning...";
}

void passBaseByValue(ConcreteBase v)
{
    cout << "\n\tpassBaseByValue(" << v << ")";
    cout << "\n\tCalling getVal():"
         << v.getVal();
    cout << "\n\tAssigning object with value of 'V':";
    v = ConcreteBase('V');
    cout << "\n\tReturning...";
}

void passDerivedByValue(ConcreteDerived v)
{
    cout << "\n\tpassDerivedByValue(" << v << ")";
    cout << "\n\tCalling getVal():"
         << v.getVal();
    cout << "\n\tAssigning object with value of 'V':";
    v = ConcreteDerived('V');
    cout << "\n\tReturning...";
}

ConcreteBase* returnBaseByPointer(void)
{
    cout << "\n\tCreating local base object with value 'P':";
    ConcreteBase p('P');
    cout << "\n\tReturning base object address...";
    return &p;
}

ConcreteDerived* returnDerivedByPointer(void)
{
    cout << "\n\tCreating local derived object with value 'P' and scale 0.5:";
    ConcreteDerived p('P', 0.5);
    cout << "\n\tReturning derived object address...";
    return &p;
}

ConcreteBase& returnBaseByReference(void)
{
    cout << "\n\tCreating local base object with value 'R':";
    ConcreteBase r('R');
    cout << "\n\tReturning base object...";
    return r;
}

ConcreteDerived& returnDerivedByReference(void)
{
    cout << "\n\tCreating local derived object with value 'R' and scale 0.5:";
    ConcreteDerived r('R', 0.5);
    cout << "\n\tReturning derived object...";
    return r;
}

ConcreteBase returnBaseByValue(void)
{
    cout << "\n\tCreating local base object with value 'V':";
    ConcreteBase v('V');
    cout << "\n\tReturning base object...";
    return v;
}

ConcreteDerived returnDerivedByValue(void)
{
    cout << "\n\tCreating local derived object with value 'V' and scale 0.5:";
    ConcreteDerived v('V', 0.5);
    cout << "\n\tReturning derived object...";
    return v;
}
