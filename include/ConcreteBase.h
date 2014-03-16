#ifndef CONCRETEBASE_H
#define CONCRETEBASE_H


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
        /** Assignment operator
         *  @param other Object to assign from
         *  @return A reference to this
         */
        ConcreteBase& operator=(const ConcreteBase& other);
        /** Access value
         * @return The current value
         */
        virtual int getVal() { return _val; }
        /** Set value
         * @param val New value to set
         */
        virtual void setVal(int val) { _val = val; }
    protected:
        int _val; //!< Member variable "_val"
};

#endif // CONCRETEBASE_H
