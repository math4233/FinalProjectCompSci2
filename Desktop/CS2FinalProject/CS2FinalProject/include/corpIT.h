#ifndef CORPIT_H
#define CORPIT_H
#include <string>
#include "Fields.h"
class corpIT
{
    public:
      corpIT();
      void invokeDescrip();
        std::string Getposition() { return position; }
        void Setposition(std::string val);

    protected:

    private:
        std::string position;
};

#endif // CORPIT_H
