#ifndef AUDITING_H
#define AUDITING_H
#include <string>
#include <Fields.h>
class auditing : public Fields
{
    public:
        //constructor
        auditing();
        //standard getter/setter functions
        std::string Getstandard() { return standard; }
        void Setstandard(std::string val);
        //outputs the description of the associated field
        void invokeDescrip();
    protected:

    private:
        std::string standard;
};

#endif // AUDITING_H
