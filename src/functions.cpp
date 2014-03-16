#include "../include/functions.h"
#include <iostream>

using std::cout;

void passByPointer(ConcreteBase* p)
{
    cout << "\n\tpassByPointer(ConcreteBase* @" << p << ")"
         << "\n\tp->getValue() == " << p->getVal()
         << "\n\tAssigning object with value of 'P':";
    p = &ConcreteBase('P');
    cout << "\n\tReturning...";
}

void passByPointer(ConcreteDerived* p)
{
    cout << "\n\tpassByPointer(ConcreteBase* @" << p << ")"
         << "\n\tp->getValue() == " << p->getVal()
         << "\n\tAssigning object with value of 'P', scale of 0.5:";
    p = &ConcreteDerived('P', 0.5);
    cout << "\n\tReturning...";
}

void passByReference(ConcreteBase& r)
{
    cout << "\n\tpassByReference(ConcreteBase& @" << &r << ")"
         << "\n\tr.getValue() == " << r.getVal()
         << "\n\tAssigning object with value of 'R':";
    r = ConcreteBase('R');
    cout << "\n\tReturning...";
}

void passByReference(ConcreteDerived& r)
{
    cout << "\n\tpassByReference(ConcreteBase& @" << &r << ")"
         << "\n\tr.getValue() == " << r.getVal()
         << "\n\tAssigning object with value of 'R', scale of 0.5:";
    r = ConcreteDerived('P', 0.5);
    cout << "\n\tReturning...";
}

void passByValue(ConcreteBase v)
{
    cout << "\n\tpassByValue(ConcreteBase @" << &v << ")"
         << "\n\tv.getValue() == " << v.getVal()
         << "\n\tAssigning object with value of 'V':";
    v = ConcreteBase('V');
    cout << "\n\tReturning...";
}

void passByValue(ConcreteDerived v)
{
    cout << "\n\tpassByValue(ConcreteDerived @" << &v << ")"
         << "\n\tv.getValue() == " << v.getVal()
         << "\n\tAssigning object with value of 'V':";
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
