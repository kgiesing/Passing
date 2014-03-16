#include <iostream>
#include <string>
#include "../include/functions.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Decomposition of main()
void doPassByPointer(void);
void doPassByReference(void);
void doPassByValue(void);
void doReturnByPointer(void);
void doReturnByReference(void);
void doReturnByValue(void);
int getInt(void);
void printInstructions(void);

// The prompt
const string PROMPT = ">: ";

int main()
{
    bool more = true;
    int choice;
    while (more)
    {
        printInstructions();
        choice = getInt();
        switch (choice)
        {
            case 1: doPassByValue(); break;
            case 2: doReturnByValue(); break;
            case 3: doPassByReference(); break;
            case 4: doReturnByReference(); break;
            case 5: doPassByPointer(); break;
            case 6: doReturnByPointer(); break;
            case 0: more = false; break;
            default:
                cout << "\nInvalid choice. " << endl;
        }
    }

    return 0;
}

void doPassByPointer(void)
{
    cout << "\n__________Pass By Pointer__________" << endl;

    cout << "\nCreating base pointer, pb, to base object created on the stack:";
    ConcreteBase* pb = &ConcreteBase('B');
    cout << "\nBefore passing, pb points to: " << *pb
         << "\nPassing pb to function:";
    passByPointer(pb);
    cout << "\nAfter return, pb points to: " << *pb << endl;

    cout << "\nCreating derived pointer, pd, to derived object created on the stack:";
    ConcreteDerived* pd = &ConcreteDerived('D', 2.0);
    cout << "\nBefore passing, pd points to: " << *pd
         << "\nPassing pd to function:";
    passByPointer(pd);
    cout << "\nAfter return, pd points to: " << *pd << endl;

    cout << "\nPointing base pointer to derived object created on stack:";
    pb = &ConcreteDerived('D', 1.5);
    cout << "\nBefore passing, pb points to: " << *pb
         << "\nPassing pb to function:";
    passByPointer(pb);
    cout << "\nAfter return, pb points to: " << *pb << endl;

    cout << "\n (...Returning...) " << endl;

}

void doPassByReference(void)
{
    cout << "\n__________Pass By Reference__________" << endl;

    cout << "\nCreating base reference, rb, to base object, b,  created on the stack:";
    ConcreteBase b('B');
    ConcreteBase& rb = b;
    cout << "\nBefore passing, rb references: " << rb
         << "\nPassing rb to function:";
    passByReference(rb);
    cout << "\nAfter return, rb references: " << rb << endl;

    cout << "\nCreating derived reference, rd, to derived object, d,"
         << "created on the stack:";
    ConcreteDerived d('D', 2.0);
    ConcreteDerived& rd = d;
    cout << "\nBefore passing, rd references: " << rd
         << "\nPassing rd to function:";
    passByReference(rd);
    cout << "\nAfter return, rd references: " << rd << endl;

    cout << "\nAssigning Assigning derived object to base reference:";
    rb = d;
    cout << "\nBefore passing, rb references: " << rb
         << "\nPassing pb to function:";
    passByReference(rb);
    cout << "\nAfter return, rb references: " << rb << endl;

    cout << "\n (...Returning...) " << endl;
}

void doPassByValue(void)
{
    cout << "\n__________Pass By Value__________" << endl;

    cout << "\nCreating base object, b, on the stack:";
    ConcreteBase b('B');
    cout << "\nBefore passing, b is: " << b
         << "\nPassing b to function:";
    passByValue(b);
    cout << "\nAfter return, b is: " << b << endl;

    cout << "\nCreating derived object, d, on the stack:";
    ConcreteDerived d('D', 2.0);
    cout << "\nBefore passing, d is: " << d
         << "\nPassing pd to function:";
    passByValue(d);
    cout << "\nAfter return, d is: " << d << endl;

    cout << "\nAssigning derived object to base object:";
    b = d;
    cout << "\nBefore passing, b is: " << b
         << "\nPassing b to function:";
    passByValue(b);
    cout << "\nAfter return, b is: " << b << endl;

    cout << "\n (...Returning...) " << endl;
}

void doReturnByPointer(void)
{
    cout << "\n__________Return By Pointer__________" << endl;

    cout << "\nCreating base pointer, pb, "
         << "to returned function-local base object:";
    ConcreteBase* pb = returnBaseByPointer();
    cout << "\nAfter return, pb points to: " << *pb << endl;

    cout << "\nCreating derived pointer, pd, "
         << "to returned function-local derived object:";
    ConcreteDerived* pd = returnDerivedByPointer();
    cout << "\nAfter return, pd points to: " << *pd << endl;

    cout << "\nPointing base pointer "
         << "to returned function-local derived object:";
    pb = returnDerivedByPointer();
    cout << "\nAfter return, pb points to: " << *pb << endl;

    cout << "\n (...Returning...) " << endl;
}

void doReturnByReference(void)
{
    cout << "\n__________Return By Reference__________" << endl;

    cout << "\nInitializing base reference, rb, "
         << "with returned function-local base object:";
    ConcreteBase& rb = returnBaseByReference();
    cout << "\nAfter return, rb references: " << rb << endl;

    cout << "\nInitializing derived reference, pd, "
         << "with returned function-local derived object:";
    ConcreteDerived& rd = returnDerivedByReference();
    cout << "\nAfter return, rd references: " << rd << endl;

    cout << "\nAssigning returned function-local derived object "
         << "to base reference:";
    rb = returnDerivedByReference();
    cout << "\nAfter return, rb references: " << rb << endl;

    cout << "\n (...Returning...) " << endl;
}

void doReturnByValue(void)
{
    cout << "\n__________Return By Value__________" << endl;

    cout << "\nInitializing base object, b, "
         << "with returned function-local base object:";
    ConcreteBase b = returnBaseByValue();
    cout << "\nAfter return, b is: " << b << endl;

    cout << "\nInitializing derived object, pd, "
         << "to returned function-local derived object:";
    ConcreteDerived d = returnDerivedByReference();
    cout << "\nAfter return, d is: " << d << endl;

    cout << "\nAssigning returned function-local derived object "
         << "to base object:";
    b = returnDerivedByReference();
    cout << "\nAfter return, b is: " << b << endl;

    cout << "\n (...Returning...) " << endl;
}

int getInt(void)
{
    int choice;
    while(!(cin >> choice))
    {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "\nNot a number. Please retry: ";
    }
    cin.ignore(80, '\n');
    return choice;
}

void printInstructions(void)
{
    cout << "\nEnter your choice:"
         << "\n\t0\tQuit"
         << "\n\t1\tDo pass by value"
         << "\n\t2\tDo return by value"
         << "\n\t3\tDo pass by reference"
         << "\n\t4\tDo return by reference"
         << "\n\t5\tDo pass by simulated reference (pointer)"
         << "\n\t6\tDo return by simulated reference (pointer)"
         << endl << PROMPT;
}
