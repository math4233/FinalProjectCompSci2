#ifndef SOFTWAREDEV_H
#define SOFTWAREDEV_H
#include <string>
#include <Fields.h>
class softwareDev : public Fields
{
    public:
        //constructor
        softwareDev();
        //standard getter/setter functions
        std::string GettypeDevelopmnt() { return typeDevelopmnt; }
        //standard getter/setter functions
        void SettypeDevelopmnt(std::string val);
        //outputs the description of the associated field
        void invokeDescrip();
    protected:

    private:
        std::string typeDevelopmnt;
};
#endif // SOFTWAREDEV_H
