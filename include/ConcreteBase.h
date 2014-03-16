#ifndef CONCRETEBASE_H
#define CONCRETEBASE_H

#include <iostream>

class ConcreteBase
{
    public:
        /** Constructor
         * @param Value
         */
        ConcreteBase(int);
        /** Destructor */
        virtual ~ConcreteBase();
        /** Copy constructor
         *  @param other Object to copy from
         */
        ConcreteBase(const ConcreteBase& other);
        /** Overloaded assignment operator
         *  @param other Object to assign from
         *  @return A reference to this
         */
        ConcreteBase& operator=(const ConcreteBase& other);
        /** Overloaded stream extraction operator */
        friend std::ostream& operator<<(std::ostream&, const ConcreteBase&);
        /** Access value
         * @return The current value
         */
        virtual int getVal() { return _val; }
        /** Set value
         * @param val New value to set
         */
        virtual void setVal(int val) { _val = val; }
    protected:
        /** Protected, empty, default constructor */
        ConcreteBase(void) { }
        int _val; //!< Member variable "_val"
};

#endif // CONCRETEBASE_H
