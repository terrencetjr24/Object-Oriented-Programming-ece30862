#ifndef DERIVED_H_
#define DERIVED_H_
#include "Base.h"

class Derived :public Base {
public:
   Derived( );
   virtual ~Derived( );

   // add necessary functions here
    virtual void f2();
};
#endif /*DERIVED_H*/
