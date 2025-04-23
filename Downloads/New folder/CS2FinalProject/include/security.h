#ifndef SECURITY_H
#define SECURITY_H
#include <string>
#include <Fields.h>
class security : public Fields
{
    public:
        //constructor
        security();
        //outputs the description of the associated field
        void invokeDescrip();
    protected:
    private:
};
#endif // SECURITY_H
