#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include "ConcreteBase.h"
#include "ConcreteDerived.h"

/** Pass a concrete base class by simulated reference (pointer) */
void passByPointer(ConcreteBase*);
/** Pass a concrete derived class by simulated reference (pointer) */
void passByPointer(ConcreteDerived*);
/** Pass a concrete base class by reference */
void passByReference(ConcreteBase&);
/** Pass a concrete derived class by reference */
void passByReference(ConcreteDerived&);
/** Pass a concrete base class by value */
void passByValue(ConcreteBase);
/** Pass a concrete derived class by value */
void passByValue(ConcreteDerived);

/** Return a function-localconcrete base class by simulated reference (pointer) */
ConcreteBase*    returnBaseByPointer(void);
/** Return a function-localconcrete derived class by simulated reference (pointer) */
ConcreteDerived* returnDerivedByPointer(void);
/** Return a function-localconcrete base class by reference */
ConcreteBase&    returnBaseByReference(void);
/** Return a function-localconcrete derived class by reference */
ConcreteDerived& returnDerivedByReference(void);
/** Return a function-localconcrete base class by value */
ConcreteBase     returnBaseByValue(void);
/** Return a function-localconcrete derived class by value */
ConcreteDerived  returnDerivedByValue(void);

#endif // FUNCTIONS_H_INCLUDED
