#ifndef CONCRETEDERIVED_H
#define CONCRETEDERIVED_H

#include "ConcreteBase.h"
#include <iostream>

class ConcreteDerived : public ConcreteBase
{
    public:
        /** Constructor
         * @param Value
         * @param Scale
         */
        ConcreteDerived(int, double=1.0);
        /** Destructor */
        ~ConcreteDerived();
        /** Copy constructor
         *  @param other Object to copy from
         */
        ConcreteDerived(const ConcreteDerived& other);
        /** Overloaded assignment operator
         *  @param other Object to assign from
         *  @return A reference to this
         */
        ConcreteDerived& operator=(const ConcreteDerived& other);
        /** Access scaled value
         * @return The current value multiplied by the scale
         */
        /** Overloaded stream extraction operator */
        friend std::ostream& operator<<(std::ostream&, const ConcreteDerived&);
        virtual int getVal() { return _val * _scale; }
        /** Set value
         * @param val New value to set
         */
        void setScale(double scale) { _scale = scale; }
    private:
        double _scale;
};

#endif // CONCRETEDERIVED_H
