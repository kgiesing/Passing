#ifndef CONCRETEDERIVED_H
#define CONCRETEDERIVED_H

#include "ConcreteBase.h"


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
        /** Assignment operator
         *  @param other Object to assign from
         *  @return A reference to this
         */
        ConcreteDerived& operator=(const ConcreteDerived& other);
        /** Access scaled value
         * @return The current value multiplied by the scale
         */
        virtual int getVal() { return _val * _scale; }
        /** Set value
         * @param val New value to set
         */
        void setScale(double scale) { _scale = scale; }
    private:
        double _scale;
};

#endif // CONCRETEDERIVED_H
