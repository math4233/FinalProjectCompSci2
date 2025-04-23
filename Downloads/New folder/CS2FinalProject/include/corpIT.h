#ifndef CORPIT_H
#define CORPIT_H
#include <string>
#include "Fields.h"
class corpIT
{
    public:
        //constructor
      corpIT();
      //outputs the description of the associated field
      void invokeDescrip();
      //standard getter/setter functions
        std::string Getposition() { return position; }
        //standard getter/setter functions
        void Setposition(std::string val);

    protected:

    private:
        std::string position;
};

#endif // CORPIT_H
