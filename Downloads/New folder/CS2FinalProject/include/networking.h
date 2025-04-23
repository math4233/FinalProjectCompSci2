#ifndef NETWORKING_H
#define NETWORKING_H
#include <string>
#include <Fields.h>
class networking : public Fields
{
    public:
        //constructor
        networking();
        //standard getter/setter functions
        std::string Getrole() { return role; }
        //standard getter/setter functions
        void Setrole(std::string val){role = val;};
        //outputs the description of the associated field
        void invokeDescrip();
    protected:

    private:
        std::string role;
};

#endif // NETWORKING_H
